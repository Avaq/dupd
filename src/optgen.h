
/*
 * DO NOT EDIT THIS FILE BY HAND!
 *
 * All changes will be lost when file gets regenerated.
 *
 * Generated by optgen 0.5 from config file "options.conf"
 *
 * Copyright (c) 2021, Jyri J. Virkki
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef OPTGEN_H
#define OPTGEN_H

#include <stdlib.h>

//
// The following short options are NOT yet taken:
// ab..e.g.ijk..no..rstu.w.yzAB..E.G..JK.MNOPQRSTU.W.YZ0123456789
//

#define COUNT_OPTIONS 35

// path (-p,--path) PATH : path where scanning will start
#define OPT_path 0

// stats_file (--stats-file) FILE : save stats to this file
#define OPT_stats_file 1

// minsize (-m,--minsize) SIZE : min size of files to scan
#define OPT_minsize 2

// hidden (--hidden) : include hidden files and dirs in scan
#define OPT_hidden 3

// buflimit (--buflimit) NAME : read buffer size cap
#define OPT_buflimit 4

// one_file_system (-X,--one-file-system) : for each path, stay in that filesystem
#define OPT_one_file_system 5

// hardlink_is_unique (-I,--hardlink-is-unique) : ignore hard links as duplicates
#define OPT_hardlink_is_unique 6

// no_thread_scan (--no-thread-scan) : do scan phase in a single thread
#define OPT_no_thread_scan 7

// firstblocks (--firstblocks) N : max blocks to read in first hash pass
#define OPT_firstblocks 8

// firstblocksize (--firstblocksize) N : size of firstblocks to read
#define OPT_firstblocksize 9

// blocksize (--blocksize) N : size of regular blocks to read
#define OPT_blocksize 10

// fileblocksize (--fileblocksize) N : size of blocks to read in file compare
#define OPT_fileblocksize 11

// cmp_two (--cmp-two) : force direct comparison of two files
#define OPT_cmp_two 12

// sort_by (--sort-by) NAME : testing
#define OPT_sort_by 13

// x_nofie (--x-nofie) : testing
#define OPT_x_nofie 14

// debug_size (--debug-size) N : increase logging for this size
#define OPT_debug_size 15

// cut (-c,--cut) PATHSEG : remove 'PATHSEG' from report paths
#define OPT_cut 16

// format (--format) NAME : report output format (text, csv, json)
#define OPT_format 17

// file (-f,--file) PATH : check this file
#define OPT_file 18

// exclude_path (-x,--exclude-path) PATH : ignore duplicates under this path
#define OPT_exclude_path 19

// delete (-D,--delete) : delete the cache
#define OPT_delete 20

// ls (-l,--ls) : list cache contents
#define OPT_ls 21

// link (-L,--link) : create symlinks for deleted files
#define OPT_link 22

// hardlink (-H,--hardlink) : create hard links for deleted files
#define OPT_hardlink 23

// hash (-F,--hash) NAME : specify alternate hash function
#define OPT_hash 24

// verbose (-v,--verbose) : increase verbosity (may be repeated for more)
#define OPT_verbose 25

// verbose_level (-V,--verbose-level) N : set verbosity level to N
#define OPT_verbose_level 26

// quiet (-q,--quiet) : quiet, supress all output except fatal errors
#define OPT_quiet 27

// db (-d,--db) PATH : path to dupd database file
#define OPT_db 28

// cache (-C,--cache) PATH : path to dupd hash cache file
#define OPT_cache 29

// help (-h,--help) : show brief usage info
#define OPT_help 30

// x_small_buffers (--x-small-buffers) : for testing only, not useful otherwise
#define OPT_x_small_buffers 31

// x_testing (--x-testing) : for testing only, not useful otherwise
#define OPT_x_testing 32

// x_no_cache (--x-no-cache) : for testing only, not useful otherwise
#define OPT_x_no_cache 33

// x_cache_min_size (--x-cache-min-size) N : for testing only, not useful otherwise
#define OPT_x_cache_min_size 34

// scan: scan starting from the given path
#define COMMAND_scan 1

// refresh: remove deleted files from the database
#define COMMAND_refresh 2

// report: show duplicate report from last scan
#define COMMAND_report 3

// file: based on report, check for duplicates of one file
#define COMMAND_file 4

// uniques: based on report, look for unique files
#define COMMAND_uniques 5

// dups: based on report, look for duplicate files
#define COMMAND_dups 6

// ls: based on report, list info about every file seen
#define COMMAND_ls 7

// hash: just hash one file, no duplicate detection
#define COMMAND_hash 8

// cache: operate on the hash cache
#define COMMAND_cache 9

// rmsh: create shell script to delete all duplicates
#define COMMAND_rmsh 10

// validate: revalidate all duplicates in db
#define COMMAND_validate 11

// help: show brief usage info
#define COMMAND_help 12

// usage: show more extensive documentation
#define COMMAND_usage 13

// man: show more extensive documentation
#define COMMAND_man 14

// license: show license info
#define COMMAND_license 15

// version: show version and exit
#define COMMAND_version 16

// testing: testing only, ignore
#define COMMAND_testing 17

// GLOBAL: 
#define COMMAND_GLOBAL 18

/**
 * Function to parse the arguments.
 *
 * Parameters:
 *   argc    - argv size (as passed to main)
 *   argv    - Arguments (as passed to main)
 *   command - Command (if present) will be stored here
 *   options - Caller-allocated array where option values will be stored
 *
 * Return:
 *   OPTGEN_OK on success
 *   OPTGEN_NONE if no arguments seen
 *   command will be set to OPTGEN_NO_COMMAND if no command given, or
 *     one of the COMMAND_* constants above.
 *   options array has an entry for each OPT_* index for each known option.
 *     The value of each OPT_* entry is one of:
 *       NULL if the option was not seen
 *       string value if the option had a value
 *       for options with no value, a string value of an integer
 *
 * Sample call:
 *
 *   char * options[COUNT_OPTIONS];
 *   int command;
 *
 *   int rv = optgen_parse(argc, argv, &command, options);
 *
 */
int optgen_parse(int argc, char * argv[], int * command, char * options[]);
#define OPTGEN_OK 0
#define OPTGEN_NONE 1
#define OPTGEN_NO_COMMAND -1

/**
 * Convenience function to get count of times an option was specified.
 * For options which take NO arguments but can be repeated multiple times,
 * this function returns the number of times it was seen
 *
 * Parameters:
 *   str - A value from options array
 *
 * Return:
 *
 *   Number of times an option was seen, or zero if none
 *
 */
int opt_count(char * str);

/**
 * Convenience function to return integer value of an option
 *
 * Parameters:
 *   str - A value from options array
 *   def - Default value if none given
 *
 * Return:
 *
 *   Value of option as integer. If NULL, returns default def.
 *
 */
int opt_int(char * str, int def);

/**
 * Convenience function to single char value of an option
 *
 * Parameters:
 *   str - A value from options array
 *   def - Default value if none given
 *
 * Return:
 *
 *   Value of option as char. If NULL, returns default def.
 *
 */
char opt_char(char * str, char def);

/**
 * Convenience function to string value of an option
 *
 * Parameters:
 *   str - A value from options array
 *   def - Default value if none given
 *
 * Return:
 *
 *   Value of option as char *. If NULL, returns default def.
 *
 */
char * opt_string(char * str, char * def);

/**
 * Show help based on command and option descriptions.
 *
 */
void opt_show_help();

// Callbacks need to return one of these values
#define OPTGEN_CALLBACK_OK 0
#define OPTGEN_CALLBACK_FAIL 1

#endif
