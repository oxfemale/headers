typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned __int64 UnusedBlocks;
  /* 0x0008 */ unsigned long ActiveCacheMatch;
  /* 0x000c */ unsigned long ActiveCacheOverride;
  /* 0x0010 */ unsigned long UnmappedCacheFlush;
  /* 0x0014 */ unsigned long UnmappedCacheMatch;
  /* 0x0018 */ unsigned long UnmappedCacheConflict;
  /* 0x001c */ long __PADDING__[1];
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0020 */

