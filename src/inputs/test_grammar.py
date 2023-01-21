#!/usr/bin/python3

import os
import subprocess


def GetInputFileNames():
    path = "/home/ross/Workspace/University/EITI/1sem/proi/project/src/inputs"
    return [f for f in os.scandir(path) if (f.is_file() and not f.name.endswith('.py'))]


def SetupEnvironment():
    old_classpath = ''
    if 'CLASSPATH' in os.environ:
        old_classpath = os.environ['CLASSPATH']
    os.environ['CLASSPATH'] = ('/usr/local/lib/antlr-4.9.2-complete.jar' +
                               old_classpath)


def Test(filepath):
    grammar = 'ReplCommands'
    start_rule = 'commandLine'
    options = []
    command = ['java', 'org.antlr.v4.gui.TestRig', grammar, start_rule,
               *options, filepath]
    process = subprocess.run(command, capture_output=True)
    success = process.stderr.decode('utf-8') == ''
    if not success:
        print(process.stderr)
    # else:
    #     print(process.stdout)
    return success


SetupEnvironment()
for filename in GetInputFileNames():
    if Test(filename.path):
        print(f"[SUCCESS] Test for '{filename.name}' succeded!")
    else:
        print(f"[ ERROR ] Test for '{filename.name}' failed!")
