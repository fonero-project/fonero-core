---
title: Fonero Development Foundation
---

# NAME

fonero-core - Core daemon for Fonero payment network

# SYNOPSYS

fonero-core [OPTIONS]

# DESCRIPTION

Fonero is a decentralized, federated peer-to-peer network that allows
people to send payments in any asset anywhere in the world
instantaneously, and with minimal fee. `Fonero-core` is the core
component of this network. `Fonero-core` is a C++ implementation of
the Fonero Consensus Protocol configured to construct a chain of
ledgers that are guaranteed to be in agreement across all the
participating nodes at all times.

## Configuration file

In most modes of operation, fonero-core requires a configuration
file.  By default, it looks for a file called `fonero-core.cfg` in
the current working directory, but this default can be changed by the
`--conf` command-line option.  The configuration file is in TOML
syntax.  The full set of supported directives can be found in
`%prefix%/share/doc/fonero-core_example.cfg`.

%commands%

# EXAMPLES

See `%prefix%/share/doc/*.cfg` for some example fonero-core
configuration files

# FILES

fonero-core.cfg
:   Configuration file (in current working directory by default)

# SEE ALSO

<https://www.fonero.org/developers/fonero-core/software/admin.html>
:   fonero-core administration guide

<https://www.fonero.org>
:   Home page of Fonero development foundation

# BUGS

Please report bugs using the github issue tracker:\
<https://github.com/fonero-project/fonero-core/issues>
