
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ALWAYS_SYM = 269,
     ANALYZE_SYM = 270,
     AND_AND_SYM = 271,
     AND_SYM = 272,
     ANY_SYM = 273,
     AS = 274,
     ASC = 275,
     ASCII_SYM = 276,
     ASENSITIVE_SYM = 277,
     AT_SYM = 278,
     AUTHORS_SYM = 279,
     AUTOEXTEND_SIZE_SYM = 280,
     AUTO_INC = 281,
     AVG_ROW_LENGTH = 282,
     AVG_SYM = 283,
     BACKUP_SYM = 284,
     BEFORE_SYM = 285,
     BEGIN_SYM = 286,
     BETWEEN_SYM = 287,
     BIGINT = 288,
     BINARY = 289,
     BINLOG_SYM = 290,
     BIN_NUM = 291,
     BIT_AND = 292,
     BIT_OR = 293,
     BIT_SYM = 294,
     BIT_XOR = 295,
     BLOB_SYM = 296,
     BLOCK_SYM = 297,
     BOOLEAN_SYM = 298,
     BOOL_SYM = 299,
     BOTH = 300,
     BTREE_SYM = 301,
     BY = 302,
     BYTE_SYM = 303,
     CACHE_SYM = 304,
     CALL_SYM = 305,
     CASCADE = 306,
     CASCADED = 307,
     CASE_SYM = 308,
     CAST_SYM = 309,
     CATALOG_NAME_SYM = 310,
     CHAIN_SYM = 311,
     CHANGE = 312,
     CHANGED = 313,
     CHARSET = 314,
     CHAR_SYM = 315,
     CHECKPOINT_SYM = 316,
     CHECKSUM_SYM = 317,
     CHECK_SYM = 318,
     CIPHER_SYM = 319,
     CLASS_ORIGIN_SYM = 320,
     CLIENT_SYM = 321,
     CLIENT_STATS_SYM = 322,
     CLOSE_SYM = 323,
     COALESCE = 324,
     CODE_SYM = 325,
     COLLATE_SYM = 326,
     COLLATION_SYM = 327,
     COLUMNS = 328,
     COLUMN_ADD_SYM = 329,
     COLUMN_CREATE_SYM = 330,
     COLUMN_DELETE_SYM = 331,
     COLUMN_EXISTS_SYM = 332,
     COLUMN_GET_SYM = 333,
     COLUMN_LIST_SYM = 334,
     COLUMN_SYM = 335,
     COLUMN_NAME_SYM = 336,
     COMMENT_SYM = 337,
     COMMITTED_SYM = 338,
     COMMIT_SYM = 339,
     COMPACT_SYM = 340,
     COMPLETION_SYM = 341,
     COMPRESSED_SYM = 342,
     CONCURRENT = 343,
     CONDITION_SYM = 344,
     CONNECTION_SYM = 345,
     CONSISTENT_SYM = 346,
     CONSTRAINT = 347,
     CONSTRAINT_CATALOG_SYM = 348,
     CONSTRAINT_NAME_SYM = 349,
     CONSTRAINT_SCHEMA_SYM = 350,
     CONTAINS_SYM = 351,
     CONTEXT_SYM = 352,
     CONTINUE_SYM = 353,
     CONTRIBUTORS_SYM = 354,
     CONVERT_SYM = 355,
     COUNT_SYM = 356,
     CPU_SYM = 357,
     CREATE = 358,
     CROSS = 359,
     CUBE_SYM = 360,
     CURDATE = 361,
     CURRENT_USER = 362,
     CURSOR_SYM = 363,
     CURSOR_NAME_SYM = 364,
     CURTIME = 365,
     DATABASE = 366,
     DATABASES = 367,
     DATAFILE_SYM = 368,
     DATA_SYM = 369,
     DATETIME = 370,
     DATE_ADD_INTERVAL = 371,
     DATE_SUB_INTERVAL = 372,
     DATE_SYM = 373,
     DAY_HOUR_SYM = 374,
     DAY_MICROSECOND_SYM = 375,
     DAY_MINUTE_SYM = 376,
     DAY_SECOND_SYM = 377,
     DAY_SYM = 378,
     DEALLOCATE_SYM = 379,
     DECIMAL_NUM = 380,
     DECIMAL_SYM = 381,
     DECLARE_SYM = 382,
     DEFAULT = 383,
     DEFINER_SYM = 384,
     DELAYED_SYM = 385,
     DELAY_KEY_WRITE_SYM = 386,
     DELETE_SYM = 387,
     DESC = 388,
     DESCRIBE = 389,
     DES_KEY_FILE = 390,
     DETERMINISTIC_SYM = 391,
     DIRECTORY_SYM = 392,
     DISABLE_SYM = 393,
     DISCARD = 394,
     DISK_SYM = 395,
     DISTINCT = 396,
     DIV_SYM = 397,
     DOUBLE_SYM = 398,
     DO_SYM = 399,
     DROP = 400,
     DUAL_SYM = 401,
     DUMPFILE = 402,
     DUPLICATE_SYM = 403,
     DYNAMIC_SYM = 404,
     EACH_SYM = 405,
     ELSE = 406,
     ELSEIF_SYM = 407,
     ENABLE_SYM = 408,
     ENCLOSED = 409,
     END = 410,
     ENDS_SYM = 411,
     END_OF_INPUT = 412,
     ENGINES_SYM = 413,
     ENGINE_SYM = 414,
     ENUM = 415,
     EQ = 416,
     EQUAL_SYM = 417,
     ERROR_SYM = 418,
     ERRORS = 419,
     ESCAPED = 420,
     ESCAPE_SYM = 421,
     EVENTS_SYM = 422,
     EVENT_SYM = 423,
     EVERY_SYM = 424,
     EXAMINED_SYM = 425,
     EXECUTE_SYM = 426,
     EXISTS = 427,
     EXIT_SYM = 428,
     EXPANSION_SYM = 429,
     EXTENDED_SYM = 430,
     EXTENT_SIZE_SYM = 431,
     EXTRACT_SYM = 432,
     FALSE_SYM = 433,
     FAST_SYM = 434,
     FAULTS_SYM = 435,
     FETCH_SYM = 436,
     FILE_SYM = 437,
     FIRST_SYM = 438,
     FIXED_SYM = 439,
     FLOAT_NUM = 440,
     FLOAT_SYM = 441,
     FLUSH_SYM = 442,
     FORCE_SYM = 443,
     FOREIGN = 444,
     FOR_SYM = 445,
     FOUND_SYM = 446,
     FROM = 447,
     FULL = 448,
     FULLTEXT_SYM = 449,
     FUNCTION_SYM = 450,
     GE = 451,
     GENERAL = 452,
     GENERATED_SYM = 453,
     GEOMETRYCOLLECTION = 454,
     GEOMETRY_SYM = 455,
     GET_FORMAT = 456,
     GLOBAL_SYM = 457,
     GRANT = 458,
     GRANTS = 459,
     GROUP_SYM = 460,
     GROUP_CONCAT_SYM = 461,
     GT_SYM = 462,
     HANDLER_SYM = 463,
     HARD_SYM = 464,
     HASH_SYM = 465,
     HAVING = 466,
     HELP_SYM = 467,
     HEX_NUM = 468,
     HEX_STRING = 469,
     HIGH_PRIORITY = 470,
     HOST_SYM = 471,
     HOSTS_SYM = 472,
     HOUR_MICROSECOND_SYM = 473,
     HOUR_MINUTE_SYM = 474,
     HOUR_SECOND_SYM = 475,
     HOUR_SYM = 476,
     IDENT = 477,
     IDENTIFIED_SYM = 478,
     IDENT_QUOTED = 479,
     IF = 480,
     IGNORE_SYM = 481,
     IGNORE_SERVER_IDS_SYM = 482,
     IMPORT = 483,
     INDEXES = 484,
     INDEX_SYM = 485,
     INDEX_STATS_SYM = 486,
     INFILE = 487,
     INITIAL_SIZE_SYM = 488,
     INNER_SYM = 489,
     INOUT_SYM = 490,
     INSENSITIVE_SYM = 491,
     INSERT = 492,
     INSERT_METHOD = 493,
     INSTALL_SYM = 494,
     INTERVAL_SYM = 495,
     INTO = 496,
     INT_SYM = 497,
     INVOKER_SYM = 498,
     IN_SYM = 499,
     IO_SYM = 500,
     IPC_SYM = 501,
     IS = 502,
     ISOLATION = 503,
     ISSUER_SYM = 504,
     ITERATE_SYM = 505,
     JOIN_SYM = 506,
     KEYS = 507,
     KEY_BLOCK_SIZE = 508,
     KEY_SYM = 509,
     KILL_SYM = 510,
     LANGUAGE_SYM = 511,
     LAST_SYM = 512,
     LAST_VALUE = 513,
     LE = 514,
     LEADING = 515,
     LEAVES = 516,
     LEAVE_SYM = 517,
     LEFT = 518,
     LESS_SYM = 519,
     LEVEL_SYM = 520,
     LEX_HOSTNAME = 521,
     LIKE = 522,
     LIMIT = 523,
     LINEAR_SYM = 524,
     LINES = 525,
     LINESTRING = 526,
     LIST_SYM = 527,
     LOAD = 528,
     LOCAL_SYM = 529,
     LOCATOR_SYM = 530,
     LOCKS_SYM = 531,
     LOCK_SYM = 532,
     LOGFILE_SYM = 533,
     LOGS_SYM = 534,
     LONGBLOB = 535,
     LONGTEXT = 536,
     LONG_NUM = 537,
     LONG_SYM = 538,
     LOOP_SYM = 539,
     LOW_PRIORITY = 540,
     LT = 541,
     MASTER_CONNECT_RETRY_SYM = 542,
     MASTER_HOST_SYM = 543,
     MASTER_LOG_FILE_SYM = 544,
     MASTER_LOG_POS_SYM = 545,
     MASTER_PASSWORD_SYM = 546,
     MASTER_PORT_SYM = 547,
     MASTER_SERVER_ID_SYM = 548,
     MASTER_SSL_CAPATH_SYM = 549,
     MASTER_SSL_CA_SYM = 550,
     MASTER_SSL_CERT_SYM = 551,
     MASTER_SSL_CIPHER_SYM = 552,
     MASTER_SSL_KEY_SYM = 553,
     MASTER_SSL_SYM = 554,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 555,
     MASTER_SYM = 556,
     MASTER_USER_SYM = 557,
     MASTER_HEARTBEAT_PERIOD_SYM = 558,
     MATCH = 559,
     MAX_CONNECTIONS_PER_HOUR = 560,
     MAX_QUERIES_PER_HOUR = 561,
     MAX_ROWS = 562,
     MAX_SIZE_SYM = 563,
     MAX_SYM = 564,
     MAX_UPDATES_PER_HOUR = 565,
     MAX_USER_CONNECTIONS_SYM = 566,
     MAX_VALUE_SYM = 567,
     MEDIUMBLOB = 568,
     MEDIUMINT = 569,
     MEDIUMTEXT = 570,
     MEDIUM_SYM = 571,
     MEMORY_SYM = 572,
     MERGE_SYM = 573,
     MESSAGE_TEXT_SYM = 574,
     MICROSECOND_SYM = 575,
     MIGRATE_SYM = 576,
     MINUTE_MICROSECOND_SYM = 577,
     MINUTE_SECOND_SYM = 578,
     MINUTE_SYM = 579,
     MIN_ROWS = 580,
     MIN_SYM = 581,
     MODE_SYM = 582,
     MODIFIES_SYM = 583,
     MODIFY_SYM = 584,
     MOD_SYM = 585,
     MONTH_SYM = 586,
     MULTILINESTRING = 587,
     MULTIPOINT = 588,
     MULTIPOLYGON = 589,
     MUTEX_SYM = 590,
     MYSQL_ERRNO_SYM = 591,
     NAMES_SYM = 592,
     NAME_SYM = 593,
     NATIONAL_SYM = 594,
     NATURAL = 595,
     NCHAR_STRING = 596,
     NCHAR_SYM = 597,
     NDBCLUSTER_SYM = 598,
     NE = 599,
     NEG = 600,
     NEW_SYM = 601,
     NEXT_SYM = 602,
     NODEGROUP_SYM = 603,
     NONE_SYM = 604,
     NOT2_SYM = 605,
     NOT_SYM = 606,
     NOW_SYM = 607,
     NO_SYM = 608,
     NO_WAIT_SYM = 609,
     NO_WRITE_TO_BINLOG = 610,
     NULL_SYM = 611,
     NUM = 612,
     NUMERIC_SYM = 613,
     NVARCHAR_SYM = 614,
     OFFSET_SYM = 615,
     OLD_PASSWORD = 616,
     ON = 617,
     ONE_SHOT_SYM = 618,
     ONE_SYM = 619,
     ONLINE_SYM = 620,
     OPEN_SYM = 621,
     OPTIMIZE = 622,
     OPTIONS_SYM = 623,
     OPTION = 624,
     OPTIONALLY = 625,
     OR2_SYM = 626,
     ORDER_SYM = 627,
     OR_OR_SYM = 628,
     OR_SYM = 629,
     OUTER = 630,
     OUTFILE = 631,
     OUT_SYM = 632,
     OWNER_SYM = 633,
     PACK_KEYS_SYM = 634,
     PAGE_SYM = 635,
     PAGE_CHECKSUM_SYM = 636,
     PARAM_MARKER = 637,
     PARSER_SYM = 638,
     PARSE_VCOL_EXPR_SYM = 639,
     PARTIAL = 640,
     PARTITIONING_SYM = 641,
     PARTITIONS_SYM = 642,
     PARTITION_SYM = 643,
     PASSWORD = 644,
     PERSISTENT_SYM = 645,
     PHASE_SYM = 646,
     PLUGINS_SYM = 647,
     PLUGIN_SYM = 648,
     POINT_SYM = 649,
     POLYGON = 650,
     PORT_SYM = 651,
     POSITION_SYM = 652,
     PRECISION = 653,
     PREPARE_SYM = 654,
     PRESERVE_SYM = 655,
     PREV_SYM = 656,
     PRIMARY_SYM = 657,
     PRIVILEGES = 658,
     PROCEDURE_SYM = 659,
     PROCESS = 660,
     PROCESSLIST_SYM = 661,
     PROFILE_SYM = 662,
     PROFILES_SYM = 663,
     PROXY_SYM = 664,
     PURGE = 665,
     QUARTER_SYM = 666,
     QUERY_SYM = 667,
     QUICK = 668,
     RANGE_SYM = 669,
     READS_SYM = 670,
     READ_ONLY_SYM = 671,
     READ_SYM = 672,
     READ_WRITE_SYM = 673,
     REAL = 674,
     REBUILD_SYM = 675,
     RECOVER_SYM = 676,
     REDOFILE_SYM = 677,
     REDO_BUFFER_SIZE_SYM = 678,
     REDUNDANT_SYM = 679,
     REFERENCES = 680,
     REGEXP = 681,
     RELAY = 682,
     RELAYLOG_SYM = 683,
     RELAY_LOG_FILE_SYM = 684,
     RELAY_LOG_POS_SYM = 685,
     RELAY_THREAD = 686,
     RELEASE_SYM = 687,
     RELOAD = 688,
     REMOVE_SYM = 689,
     RENAME = 690,
     REORGANIZE_SYM = 691,
     REPAIR = 692,
     REPEATABLE_SYM = 693,
     REPEAT_SYM = 694,
     REPLACE = 695,
     REPLICATION = 696,
     REQUIRE_SYM = 697,
     RESET_SYM = 698,
     RESIGNAL_SYM = 699,
     RESOURCES = 700,
     RESTORE_SYM = 701,
     RESTRICT = 702,
     RESUME_SYM = 703,
     RETURNS_SYM = 704,
     RETURN_SYM = 705,
     REVOKE = 706,
     RIGHT = 707,
     ROLLBACK_SYM = 708,
     ROLLUP_SYM = 709,
     ROUTINE_SYM = 710,
     ROWS_SYM = 711,
     ROW_FORMAT_SYM = 712,
     ROW_SYM = 713,
     RTREE_SYM = 714,
     SAVEPOINT_SYM = 715,
     SCHEDULE_SYM = 716,
     SCHEMA_NAME_SYM = 717,
     SECOND_MICROSECOND_SYM = 718,
     SECOND_SYM = 719,
     SECURITY_SYM = 720,
     SELECT_SYM = 721,
     SENSITIVE_SYM = 722,
     SEPARATOR_SYM = 723,
     SERIALIZABLE_SYM = 724,
     SERIAL_SYM = 725,
     SESSION_SYM = 726,
     SERVER_SYM = 727,
     SERVER_OPTIONS = 728,
     SET = 729,
     SET_VAR = 730,
     SHARE_SYM = 731,
     SHIFT_LEFT = 732,
     SHIFT_RIGHT = 733,
     SHOW = 734,
     SHUTDOWN = 735,
     SIGNAL_SYM = 736,
     SIGNED_SYM = 737,
     SIMPLE_SYM = 738,
     SLAVE = 739,
     SLOW = 740,
     SMALLINT = 741,
     SNAPSHOT_SYM = 742,
     SOCKET_SYM = 743,
     SOFT_SYM = 744,
     SONAME_SYM = 745,
     SOUNDS_SYM = 746,
     SOURCE_SYM = 747,
     SPATIAL_SYM = 748,
     SPECIFIC_SYM = 749,
     SQLEXCEPTION_SYM = 750,
     SQLSTATE_SYM = 751,
     SQLWARNING_SYM = 752,
     SQL_BIG_RESULT = 753,
     SQL_BUFFER_RESULT = 754,
     SQL_CACHE_SYM = 755,
     SQL_CALC_FOUND_ROWS = 756,
     SQL_NO_CACHE_SYM = 757,
     SQL_SMALL_RESULT = 758,
     SQL_SYM = 759,
     SQL_THREAD = 760,
     SSL_SYM = 761,
     STARTING = 762,
     STARTS_SYM = 763,
     START_SYM = 764,
     STATUS_SYM = 765,
     STDDEV_SAMP_SYM = 766,
     STD_SYM = 767,
     STOP_SYM = 768,
     STORAGE_SYM = 769,
     STRAIGHT_JOIN = 770,
     STRING_SYM = 771,
     SUBCLASS_ORIGIN_SYM = 772,
     SUBDATE_SYM = 773,
     SUBJECT_SYM = 774,
     SUBPARTITIONS_SYM = 775,
     SUBPARTITION_SYM = 776,
     SUBSTRING = 777,
     SUM_SYM = 778,
     SUPER_SYM = 779,
     SUSPEND_SYM = 780,
     SWAPS_SYM = 781,
     SWITCHES_SYM = 782,
     SYSDATE = 783,
     TABLES = 784,
     TABLESPACE = 785,
     TABLE_REF_PRIORITY = 786,
     TABLE_STATS_SYM = 787,
     TABLE_SYM = 788,
     TABLE_CHECKSUM_SYM = 789,
     TABLE_NAME_SYM = 790,
     TEMPORARY = 791,
     TEMPTABLE_SYM = 792,
     TERMINATED = 793,
     TEXT_STRING = 794,
     TEXT_SYM = 795,
     THAN_SYM = 796,
     THEN_SYM = 797,
     TIMESTAMP = 798,
     TIMESTAMP_ADD = 799,
     TIMESTAMP_DIFF = 800,
     TIME_SYM = 801,
     TINYBLOB = 802,
     TINYINT = 803,
     TINYTEXT = 804,
     TO_SYM = 805,
     TRAILING = 806,
     TRANSACTION_SYM = 807,
     TRANSACTIONAL_SYM = 808,
     TRIGGERS_SYM = 809,
     TRIGGER_SYM = 810,
     TRIM = 811,
     TRUE_SYM = 812,
     TRUNCATE_SYM = 813,
     TYPES_SYM = 814,
     TYPE_SYM = 815,
     UDF_RETURNS_SYM = 816,
     ULONGLONG_NUM = 817,
     UNCOMMITTED_SYM = 818,
     UNDEFINED_SYM = 819,
     UNDERSCORE_CHARSET = 820,
     UNDOFILE_SYM = 821,
     UNDO_BUFFER_SIZE_SYM = 822,
     UNDO_SYM = 823,
     UNICODE_SYM = 824,
     UNINSTALL_SYM = 825,
     UNION_SYM = 826,
     UNIQUE_SYM = 827,
     UNKNOWN_SYM = 828,
     UNLOCK_SYM = 829,
     UNSIGNED = 830,
     UNTIL_SYM = 831,
     UPDATE_SYM = 832,
     UPGRADE_SYM = 833,
     USAGE = 834,
     USER = 835,
     USER_STATS_SYM = 836,
     USE_FRM = 837,
     USE_SYM = 838,
     USING = 839,
     UTC_DATE_SYM = 840,
     UTC_TIMESTAMP_SYM = 841,
     UTC_TIME_SYM = 842,
     VALUES = 843,
     VALUE_SYM = 844,
     VARBINARY = 845,
     VARCHAR = 846,
     VARIABLES = 847,
     VARIANCE_SYM = 848,
     VARYING = 849,
     VAR_SAMP_SYM = 850,
     VIA_SYM = 851,
     VIEW_SYM = 852,
     VIRTUAL_SYM = 853,
     WAIT_SYM = 854,
     WARNINGS = 855,
     WEEK_SYM = 856,
     WHEN_SYM = 857,
     WHERE = 858,
     WHILE_SYM = 859,
     WITH = 860,
     WITH_CUBE_SYM = 861,
     WITH_ROLLUP_SYM = 862,
     WORK_SYM = 863,
     WRAPPER_SYM = 864,
     WRITE_SYM = 865,
     X509_SYM = 866,
     XA_SYM = 867,
     XML_SYM = 868,
     XOR = 869,
     YEAR_MONTH_SYM = 870,
     YEAR_SYM = 871,
     ZEROFILL = 872,
     IMPOSSIBLE_ACTION = 873
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ALWAYS_SYM 269
#define ANALYZE_SYM 270
#define AND_AND_SYM 271
#define AND_SYM 272
#define ANY_SYM 273
#define AS 274
#define ASC 275
#define ASCII_SYM 276
#define ASENSITIVE_SYM 277
#define AT_SYM 278
#define AUTHORS_SYM 279
#define AUTOEXTEND_SIZE_SYM 280
#define AUTO_INC 281
#define AVG_ROW_LENGTH 282
#define AVG_SYM 283
#define BACKUP_SYM 284
#define BEFORE_SYM 285
#define BEGIN_SYM 286
#define BETWEEN_SYM 287
#define BIGINT 288
#define BINARY 289
#define BINLOG_SYM 290
#define BIN_NUM 291
#define BIT_AND 292
#define BIT_OR 293
#define BIT_SYM 294
#define BIT_XOR 295
#define BLOB_SYM 296
#define BLOCK_SYM 297
#define BOOLEAN_SYM 298
#define BOOL_SYM 299
#define BOTH 300
#define BTREE_SYM 301
#define BY 302
#define BYTE_SYM 303
#define CACHE_SYM 304
#define CALL_SYM 305
#define CASCADE 306
#define CASCADED 307
#define CASE_SYM 308
#define CAST_SYM 309
#define CATALOG_NAME_SYM 310
#define CHAIN_SYM 311
#define CHANGE 312
#define CHANGED 313
#define CHARSET 314
#define CHAR_SYM 315
#define CHECKPOINT_SYM 316
#define CHECKSUM_SYM 317
#define CHECK_SYM 318
#define CIPHER_SYM 319
#define CLASS_ORIGIN_SYM 320
#define CLIENT_SYM 321
#define CLIENT_STATS_SYM 322
#define CLOSE_SYM 323
#define COALESCE 324
#define CODE_SYM 325
#define COLLATE_SYM 326
#define COLLATION_SYM 327
#define COLUMNS 328
#define COLUMN_ADD_SYM 329
#define COLUMN_CREATE_SYM 330
#define COLUMN_DELETE_SYM 331
#define COLUMN_EXISTS_SYM 332
#define COLUMN_GET_SYM 333
#define COLUMN_LIST_SYM 334
#define COLUMN_SYM 335
#define COLUMN_NAME_SYM 336
#define COMMENT_SYM 337
#define COMMITTED_SYM 338
#define COMMIT_SYM 339
#define COMPACT_SYM 340
#define COMPLETION_SYM 341
#define COMPRESSED_SYM 342
#define CONCURRENT 343
#define CONDITION_SYM 344
#define CONNECTION_SYM 345
#define CONSISTENT_SYM 346
#define CONSTRAINT 347
#define CONSTRAINT_CATALOG_SYM 348
#define CONSTRAINT_NAME_SYM 349
#define CONSTRAINT_SCHEMA_SYM 350
#define CONTAINS_SYM 351
#define CONTEXT_SYM 352
#define CONTINUE_SYM 353
#define CONTRIBUTORS_SYM 354
#define CONVERT_SYM 355
#define COUNT_SYM 356
#define CPU_SYM 357
#define CREATE 358
#define CROSS 359
#define CUBE_SYM 360
#define CURDATE 361
#define CURRENT_USER 362
#define CURSOR_SYM 363
#define CURSOR_NAME_SYM 364
#define CURTIME 365
#define DATABASE 366
#define DATABASES 367
#define DATAFILE_SYM 368
#define DATA_SYM 369
#define DATETIME 370
#define DATE_ADD_INTERVAL 371
#define DATE_SUB_INTERVAL 372
#define DATE_SYM 373
#define DAY_HOUR_SYM 374
#define DAY_MICROSECOND_SYM 375
#define DAY_MINUTE_SYM 376
#define DAY_SECOND_SYM 377
#define DAY_SYM 378
#define DEALLOCATE_SYM 379
#define DECIMAL_NUM 380
#define DECIMAL_SYM 381
#define DECLARE_SYM 382
#define DEFAULT 383
#define DEFINER_SYM 384
#define DELAYED_SYM 385
#define DELAY_KEY_WRITE_SYM 386
#define DELETE_SYM 387
#define DESC 388
#define DESCRIBE 389
#define DES_KEY_FILE 390
#define DETERMINISTIC_SYM 391
#define DIRECTORY_SYM 392
#define DISABLE_SYM 393
#define DISCARD 394
#define DISK_SYM 395
#define DISTINCT 396
#define DIV_SYM 397
#define DOUBLE_SYM 398
#define DO_SYM 399
#define DROP 400
#define DUAL_SYM 401
#define DUMPFILE 402
#define DUPLICATE_SYM 403
#define DYNAMIC_SYM 404
#define EACH_SYM 405
#define ELSE 406
#define ELSEIF_SYM 407
#define ENABLE_SYM 408
#define ENCLOSED 409
#define END 410
#define ENDS_SYM 411
#define END_OF_INPUT 412
#define ENGINES_SYM 413
#define ENGINE_SYM 414
#define ENUM 415
#define EQ 416
#define EQUAL_SYM 417
#define ERROR_SYM 418
#define ERRORS 419
#define ESCAPED 420
#define ESCAPE_SYM 421
#define EVENTS_SYM 422
#define EVENT_SYM 423
#define EVERY_SYM 424
#define EXAMINED_SYM 425
#define EXECUTE_SYM 426
#define EXISTS 427
#define EXIT_SYM 428
#define EXPANSION_SYM 429
#define EXTENDED_SYM 430
#define EXTENT_SIZE_SYM 431
#define EXTRACT_SYM 432
#define FALSE_SYM 433
#define FAST_SYM 434
#define FAULTS_SYM 435
#define FETCH_SYM 436
#define FILE_SYM 437
#define FIRST_SYM 438
#define FIXED_SYM 439
#define FLOAT_NUM 440
#define FLOAT_SYM 441
#define FLUSH_SYM 442
#define FORCE_SYM 443
#define FOREIGN 444
#define FOR_SYM 445
#define FOUND_SYM 446
#define FROM 447
#define FULL 448
#define FULLTEXT_SYM 449
#define FUNCTION_SYM 450
#define GE 451
#define GENERAL 452
#define GENERATED_SYM 453
#define GEOMETRYCOLLECTION 454
#define GEOMETRY_SYM 455
#define GET_FORMAT 456
#define GLOBAL_SYM 457
#define GRANT 458
#define GRANTS 459
#define GROUP_SYM 460
#define GROUP_CONCAT_SYM 461
#define GT_SYM 462
#define HANDLER_SYM 463
#define HARD_SYM 464
#define HASH_SYM 465
#define HAVING 466
#define HELP_SYM 467
#define HEX_NUM 468
#define HEX_STRING 469
#define HIGH_PRIORITY 470
#define HOST_SYM 471
#define HOSTS_SYM 472
#define HOUR_MICROSECOND_SYM 473
#define HOUR_MINUTE_SYM 474
#define HOUR_SECOND_SYM 475
#define HOUR_SYM 476
#define IDENT 477
#define IDENTIFIED_SYM 478
#define IDENT_QUOTED 479
#define IF 480
#define IGNORE_SYM 481
#define IGNORE_SERVER_IDS_SYM 482
#define IMPORT 483
#define INDEXES 484
#define INDEX_SYM 485
#define INDEX_STATS_SYM 486
#define INFILE 487
#define INITIAL_SIZE_SYM 488
#define INNER_SYM 489
#define INOUT_SYM 490
#define INSENSITIVE_SYM 491
#define INSERT 492
#define INSERT_METHOD 493
#define INSTALL_SYM 494
#define INTERVAL_SYM 495
#define INTO 496
#define INT_SYM 497
#define INVOKER_SYM 498
#define IN_SYM 499
#define IO_SYM 500
#define IPC_SYM 501
#define IS 502
#define ISOLATION 503
#define ISSUER_SYM 504
#define ITERATE_SYM 505
#define JOIN_SYM 506
#define KEYS 507
#define KEY_BLOCK_SIZE 508
#define KEY_SYM 509
#define KILL_SYM 510
#define LANGUAGE_SYM 511
#define LAST_SYM 512
#define LAST_VALUE 513
#define LE 514
#define LEADING 515
#define LEAVES 516
#define LEAVE_SYM 517
#define LEFT 518
#define LESS_SYM 519
#define LEVEL_SYM 520
#define LEX_HOSTNAME 521
#define LIKE 522
#define LIMIT 523
#define LINEAR_SYM 524
#define LINES 525
#define LINESTRING 526
#define LIST_SYM 527
#define LOAD 528
#define LOCAL_SYM 529
#define LOCATOR_SYM 530
#define LOCKS_SYM 531
#define LOCK_SYM 532
#define LOGFILE_SYM 533
#define LOGS_SYM 534
#define LONGBLOB 535
#define LONGTEXT 536
#define LONG_NUM 537
#define LONG_SYM 538
#define LOOP_SYM 539
#define LOW_PRIORITY 540
#define LT 541
#define MASTER_CONNECT_RETRY_SYM 542
#define MASTER_HOST_SYM 543
#define MASTER_LOG_FILE_SYM 544
#define MASTER_LOG_POS_SYM 545
#define MASTER_PASSWORD_SYM 546
#define MASTER_PORT_SYM 547
#define MASTER_SERVER_ID_SYM 548
#define MASTER_SSL_CAPATH_SYM 549
#define MASTER_SSL_CA_SYM 550
#define MASTER_SSL_CERT_SYM 551
#define MASTER_SSL_CIPHER_SYM 552
#define MASTER_SSL_KEY_SYM 553
#define MASTER_SSL_SYM 554
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 555
#define MASTER_SYM 556
#define MASTER_USER_SYM 557
#define MASTER_HEARTBEAT_PERIOD_SYM 558
#define MATCH 559
#define MAX_CONNECTIONS_PER_HOUR 560
#define MAX_QUERIES_PER_HOUR 561
#define MAX_ROWS 562
#define MAX_SIZE_SYM 563
#define MAX_SYM 564
#define MAX_UPDATES_PER_HOUR 565
#define MAX_USER_CONNECTIONS_SYM 566
#define MAX_VALUE_SYM 567
#define MEDIUMBLOB 568
#define MEDIUMINT 569
#define MEDIUMTEXT 570
#define MEDIUM_SYM 571
#define MEMORY_SYM 572
#define MERGE_SYM 573
#define MESSAGE_TEXT_SYM 574
#define MICROSECOND_SYM 575
#define MIGRATE_SYM 576
#define MINUTE_MICROSECOND_SYM 577
#define MINUTE_SECOND_SYM 578
#define MINUTE_SYM 579
#define MIN_ROWS 580
#define MIN_SYM 581
#define MODE_SYM 582
#define MODIFIES_SYM 583
#define MODIFY_SYM 584
#define MOD_SYM 585
#define MONTH_SYM 586
#define MULTILINESTRING 587
#define MULTIPOINT 588
#define MULTIPOLYGON 589
#define MUTEX_SYM 590
#define MYSQL_ERRNO_SYM 591
#define NAMES_SYM 592
#define NAME_SYM 593
#define NATIONAL_SYM 594
#define NATURAL 595
#define NCHAR_STRING 596
#define NCHAR_SYM 597
#define NDBCLUSTER_SYM 598
#define NE 599
#define NEG 600
#define NEW_SYM 601
#define NEXT_SYM 602
#define NODEGROUP_SYM 603
#define NONE_SYM 604
#define NOT2_SYM 605
#define NOT_SYM 606
#define NOW_SYM 607
#define NO_SYM 608
#define NO_WAIT_SYM 609
#define NO_WRITE_TO_BINLOG 610
#define NULL_SYM 611
#define NUM 612
#define NUMERIC_SYM 613
#define NVARCHAR_SYM 614
#define OFFSET_SYM 615
#define OLD_PASSWORD 616
#define ON 617
#define ONE_SHOT_SYM 618
#define ONE_SYM 619
#define ONLINE_SYM 620
#define OPEN_SYM 621
#define OPTIMIZE 622
#define OPTIONS_SYM 623
#define OPTION 624
#define OPTIONALLY 625
#define OR2_SYM 626
#define ORDER_SYM 627
#define OR_OR_SYM 628
#define OR_SYM 629
#define OUTER 630
#define OUTFILE 631
#define OUT_SYM 632
#define OWNER_SYM 633
#define PACK_KEYS_SYM 634
#define PAGE_SYM 635
#define PAGE_CHECKSUM_SYM 636
#define PARAM_MARKER 637
#define PARSER_SYM 638
#define PARSE_VCOL_EXPR_SYM 639
#define PARTIAL 640
#define PARTITIONING_SYM 641
#define PARTITIONS_SYM 642
#define PARTITION_SYM 643
#define PASSWORD 644
#define PERSISTENT_SYM 645
#define PHASE_SYM 646
#define PLUGINS_SYM 647
#define PLUGIN_SYM 648
#define POINT_SYM 649
#define POLYGON 650
#define PORT_SYM 651
#define POSITION_SYM 652
#define PRECISION 653
#define PREPARE_SYM 654
#define PRESERVE_SYM 655
#define PREV_SYM 656
#define PRIMARY_SYM 657
#define PRIVILEGES 658
#define PROCEDURE_SYM 659
#define PROCESS 660
#define PROCESSLIST_SYM 661
#define PROFILE_SYM 662
#define PROFILES_SYM 663
#define PROXY_SYM 664
#define PURGE 665
#define QUARTER_SYM 666
#define QUERY_SYM 667
#define QUICK 668
#define RANGE_SYM 669
#define READS_SYM 670
#define READ_ONLY_SYM 671
#define READ_SYM 672
#define READ_WRITE_SYM 673
#define REAL 674
#define REBUILD_SYM 675
#define RECOVER_SYM 676
#define REDOFILE_SYM 677
#define REDO_BUFFER_SIZE_SYM 678
#define REDUNDANT_SYM 679
#define REFERENCES 680
#define REGEXP 681
#define RELAY 682
#define RELAYLOG_SYM 683
#define RELAY_LOG_FILE_SYM 684
#define RELAY_LOG_POS_SYM 685
#define RELAY_THREAD 686
#define RELEASE_SYM 687
#define RELOAD 688
#define REMOVE_SYM 689
#define RENAME 690
#define REORGANIZE_SYM 691
#define REPAIR 692
#define REPEATABLE_SYM 693
#define REPEAT_SYM 694
#define REPLACE 695
#define REPLICATION 696
#define REQUIRE_SYM 697
#define RESET_SYM 698
#define RESIGNAL_SYM 699
#define RESOURCES 700
#define RESTORE_SYM 701
#define RESTRICT 702
#define RESUME_SYM 703
#define RETURNS_SYM 704
#define RETURN_SYM 705
#define REVOKE 706
#define RIGHT 707
#define ROLLBACK_SYM 708
#define ROLLUP_SYM 709
#define ROUTINE_SYM 710
#define ROWS_SYM 711
#define ROW_FORMAT_SYM 712
#define ROW_SYM 713
#define RTREE_SYM 714
#define SAVEPOINT_SYM 715
#define SCHEDULE_SYM 716
#define SCHEMA_NAME_SYM 717
#define SECOND_MICROSECOND_SYM 718
#define SECOND_SYM 719
#define SECURITY_SYM 720
#define SELECT_SYM 721
#define SENSITIVE_SYM 722
#define SEPARATOR_SYM 723
#define SERIALIZABLE_SYM 724
#define SERIAL_SYM 725
#define SESSION_SYM 726
#define SERVER_SYM 727
#define SERVER_OPTIONS 728
#define SET 729
#define SET_VAR 730
#define SHARE_SYM 731
#define SHIFT_LEFT 732
#define SHIFT_RIGHT 733
#define SHOW 734
#define SHUTDOWN 735
#define SIGNAL_SYM 736
#define SIGNED_SYM 737
#define SIMPLE_SYM 738
#define SLAVE 739
#define SLOW 740
#define SMALLINT 741
#define SNAPSHOT_SYM 742
#define SOCKET_SYM 743
#define SOFT_SYM 744
#define SONAME_SYM 745
#define SOUNDS_SYM 746
#define SOURCE_SYM 747
#define SPATIAL_SYM 748
#define SPECIFIC_SYM 749
#define SQLEXCEPTION_SYM 750
#define SQLSTATE_SYM 751
#define SQLWARNING_SYM 752
#define SQL_BIG_RESULT 753
#define SQL_BUFFER_RESULT 754
#define SQL_CACHE_SYM 755
#define SQL_CALC_FOUND_ROWS 756
#define SQL_NO_CACHE_SYM 757
#define SQL_SMALL_RESULT 758
#define SQL_SYM 759
#define SQL_THREAD 760
#define SSL_SYM 761
#define STARTING 762
#define STARTS_SYM 763
#define START_SYM 764
#define STATUS_SYM 765
#define STDDEV_SAMP_SYM 766
#define STD_SYM 767
#define STOP_SYM 768
#define STORAGE_SYM 769
#define STRAIGHT_JOIN 770
#define STRING_SYM 771
#define SUBCLASS_ORIGIN_SYM 772
#define SUBDATE_SYM 773
#define SUBJECT_SYM 774
#define SUBPARTITIONS_SYM 775
#define SUBPARTITION_SYM 776
#define SUBSTRING 777
#define SUM_SYM 778
#define SUPER_SYM 779
#define SUSPEND_SYM 780
#define SWAPS_SYM 781
#define SWITCHES_SYM 782
#define SYSDATE 783
#define TABLES 784
#define TABLESPACE 785
#define TABLE_REF_PRIORITY 786
#define TABLE_STATS_SYM 787
#define TABLE_SYM 788
#define TABLE_CHECKSUM_SYM 789
#define TABLE_NAME_SYM 790
#define TEMPORARY 791
#define TEMPTABLE_SYM 792
#define TERMINATED 793
#define TEXT_STRING 794
#define TEXT_SYM 795
#define THAN_SYM 796
#define THEN_SYM 797
#define TIMESTAMP 798
#define TIMESTAMP_ADD 799
#define TIMESTAMP_DIFF 800
#define TIME_SYM 801
#define TINYBLOB 802
#define TINYINT 803
#define TINYTEXT 804
#define TO_SYM 805
#define TRAILING 806
#define TRANSACTION_SYM 807
#define TRANSACTIONAL_SYM 808
#define TRIGGERS_SYM 809
#define TRIGGER_SYM 810
#define TRIM 811
#define TRUE_SYM 812
#define TRUNCATE_SYM 813
#define TYPES_SYM 814
#define TYPE_SYM 815
#define UDF_RETURNS_SYM 816
#define ULONGLONG_NUM 817
#define UNCOMMITTED_SYM 818
#define UNDEFINED_SYM 819
#define UNDERSCORE_CHARSET 820
#define UNDOFILE_SYM 821
#define UNDO_BUFFER_SIZE_SYM 822
#define UNDO_SYM 823
#define UNICODE_SYM 824
#define UNINSTALL_SYM 825
#define UNION_SYM 826
#define UNIQUE_SYM 827
#define UNKNOWN_SYM 828
#define UNLOCK_SYM 829
#define UNSIGNED 830
#define UNTIL_SYM 831
#define UPDATE_SYM 832
#define UPGRADE_SYM 833
#define USAGE 834
#define USER 835
#define USER_STATS_SYM 836
#define USE_FRM 837
#define USE_SYM 838
#define USING 839
#define UTC_DATE_SYM 840
#define UTC_TIMESTAMP_SYM 841
#define UTC_TIME_SYM 842
#define VALUES 843
#define VALUE_SYM 844
#define VARBINARY 845
#define VARCHAR 846
#define VARIABLES 847
#define VARIANCE_SYM 848
#define VARYING 849
#define VAR_SAMP_SYM 850
#define VIA_SYM 851
#define VIEW_SYM 852
#define VIRTUAL_SYM 853
#define WAIT_SYM 854
#define WARNINGS 855
#define WEEK_SYM 856
#define WHEN_SYM 857
#define WHERE 858
#define WHILE_SYM 859
#define WITH 860
#define WITH_CUBE_SYM 861
#define WITH_ROLLUP_SYM 862
#define WORK_SYM 863
#define WRAPPER_SYM 864
#define WRITE_SYM 865
#define X509_SYM 866
#define XA_SYM 867
#define XML_SYM 868
#define XOR 869
#define YEAR_MONTH_SYM 870
#define YEAR_SYM 871
#define ZEROFILL 872
#define IMPOSSIBLE_ACTION 873




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 725 "C:/buildbot/win32-packages/build/mariadb-5.5.35/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  enum ha_choice choice;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  struct sp_cond_type *spcondtype;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  DYNCALL_CREATE_DEF *dyncol_def;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  bool is_not_empty;



/* Line 1676 of yacc.c  */
#line 1342 "C:/buildbot/win32-packages/build/mariadb-5.5.35/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




