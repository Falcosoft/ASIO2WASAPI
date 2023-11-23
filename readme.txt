Documents enclosed:
"ASIO2WASAPI.pdf" - installation and configuration instructions
gpl.txt - GNU Public License

Change log:

Falcosoft:
Version 1.1

Most importantly this branch no longer handle ASIO2WASAPI as a full featured ASIO driver but as a private plugin for VST MIDI Driver:
https://github.com/Falcosoft/vstdriver

1.Fixed supported format query.
2.Fixed non modifiable 100 ms latency problem.
3.Fixed too quiet rendering in case of supported 24-bit PCM format.
4.Count of supported channels is calculated automatically.

Version 1.0

First stable release
Visual Studio 2012 port

Version 0.8

First beta release
