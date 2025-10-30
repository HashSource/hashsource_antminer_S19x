int __fastcall sub_BC494(int a1, int a2, unsigned int a3, unsigned int a4)
{
  const char *v8; // r2
  const char *v9; // r1
  int v10; // r3

  if ( a3 == 25 )
  {
    v8 = "Address of 16 random bytes";
    v9 = "AT_RANDOM";
    v10 = 1;
    return sub_BC390(a2, v9, v8, v10, a3, a4);
  }
  if ( a3 <= 0x19 )
  {
    if ( a3 == 12 )
    {
      v8 = "Effective user ID";
      v9 = "AT_EUID";
      v10 = 0;
    }
    else if ( a3 > 0xC )
    {
      if ( a3 == 18 )
      {
        v8 = "Used FPU control word";
        v9 = "AT_FPUCW";
        v10 = 0;
      }
      else if ( a3 <= 0x12 )
      {
        if ( a3 == 15 )
        {
          v8 = "String identifying platform";
          v9 = "AT_PLATFORM";
          v10 = 2;
        }
        else if ( a3 > 0xF )
        {
          if ( a3 == 16 )
          {
            v8 = "Machine-dependent CPU capability hints";
            v9 = "AT_HWCAP";
            v10 = 1;
          }
          else
          {
            v8 = "Frequency of times()";
            v9 = "AT_CLKTCK";
            v10 = 0;
          }
        }
        else
        {
          if ( a3 == 13 )
          {
            v8 = "Real group ID";
            v9 = "AT_GID";
          }
          else
          {
            v8 = "Effective group ID";
            v9 = "AT_EGID";
          }
          v10 = 0;
        }
      }
      else if ( a3 == 21 )
      {
        v8 = "Unified cache block size";
        v9 = "AT_UCACHEBSIZE";
        v10 = 0;
      }
      else if ( a3 <= 0x15 )
      {
        if ( a3 == 19 )
        {
          v8 = "Data cache block size";
          v9 = "AT_DCACHEBSIZE";
        }
        else
        {
          v8 = "Instruction cache block size";
          v9 = "AT_ICACHEBSIZE";
        }
        v10 = 0;
      }
      else if ( a3 == 23 )
      {
        v8 = "Boolean, was exec setuid-like?";
        v9 = "AT_SECURE";
        v10 = 0;
      }
      else if ( a3 > 0x17 )
      {
        v8 = "String identifying base platform";
        v9 = "AT_BASE_PLATFORM";
        v10 = 2;
      }
      else
      {
        v8 = "Entry should be ignored";
        v9 = "AT_IGNOREPPC";
        v10 = 0;
      }
    }
    else if ( a3 == 5 )
    {
      v8 = "Number of program headers";
      v9 = "AT_PHNUM";
      v10 = 0;
    }
    else if ( a3 <= 5 )
    {
      if ( a3 == 2 )
      {
        v8 = "File descriptor of program";
        v9 = "AT_EXECFD";
        v10 = 0;
      }
      else if ( a3 > 2 )
      {
        if ( a3 == 3 )
        {
          v8 = "Program headers for program";
          v9 = "AT_PHDR";
          v10 = 1;
        }
        else
        {
          v8 = "Size of program header entry";
          v9 = "AT_PHENT";
          v10 = 0;
        }
      }
      else
      {
        if ( a3 )
        {
          v8 = "Entry should be ignored";
          v9 = "AT_IGNORE";
        }
        else
        {
          v8 = "End of vector";
          v9 = "AT_NULL";
        }
        v10 = 1;
      }
    }
    else if ( a3 == 8 )
    {
      v8 = "Flags";
      v9 = "AT_FLAGS";
      v10 = 1;
    }
    else if ( a3 <= 8 )
    {
      if ( a3 == 6 )
      {
        v8 = "System page size";
        v9 = "AT_PAGESZ";
        v10 = 0;
      }
      else
      {
        v8 = "Base address of interpreter";
        v9 = "AT_BASE";
        v10 = 1;
      }
    }
    else if ( a3 == 10 )
    {
      v8 = "Program is not ELF";
      v9 = "AT_NOTELF";
      v10 = 0;
    }
    else if ( a3 > 0xA )
    {
      v8 = "Real user ID";
      v9 = "AT_UID";
      v10 = 0;
    }
    else
    {
      v8 = "Entry point of program";
      v9 = "AT_ENTRY";
      v10 = 1;
    }
  }
  else
  {
    if ( a3 == 2004 )
    {
      v8 = "Dynamic linker's ELF header";
      v9 = "AT_SUN_LDELF";
      v10 = 1;
      return sub_BC390(a2, v9, v8, v10, a3, a4);
    }
    if ( a3 > 0x7D4 )
    {
      if ( a3 == 2011 )
      {
        v8 = "CPU name string";
        v9 = "AT_SUN_CPU";
        v10 = 2;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 <= 0x7DB )
      {
        if ( a3 == 2007 )
        {
          v8 = "Large pagesize";
          v9 = "AT_SUN_LPAGESZ";
          v10 = 0;
        }
        else if ( a3 <= 0x7D7 )
        {
          if ( a3 == 2005 )
          {
            v8 = "Dynamic linker's section headers";
            v9 = "AT_SUN_LDSHDR";
            v10 = 1;
          }
          else
          {
            v8 = "String giving name of dynamic linker";
            v9 = "AT_SUN_LDNAME";
            v10 = 2;
          }
        }
        else if ( a3 == 2009 )
        {
          v8 = "Machine-dependent CPU capability hints";
          v9 = "AT_SUN_HWCAP";
          v10 = 1;
        }
        else if ( a3 > 0x7D9 )
        {
          v8 = "Should flush icache?";
          v9 = "AT_SUN_IFLUSH";
          v10 = 0;
        }
        else
        {
          v8 = "Platform name string";
          v9 = "AT_SUN_PLATFORM";
          v10 = 2;
        }
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 == 2014 )
      {
        v8 = "Canonicalized file name given to execve";
        v9 = "AT_SUN_EXECNAME";
        v10 = 2;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 <= 0x7DE )
      {
        if ( a3 == 2012 )
        {
          v8 = "COFF entry point address";
          v9 = "AT_SUN_EMUL_ENTRY";
          v10 = 1;
        }
        else
        {
          v8 = "COFF executable file descriptor";
          v9 = "AT_SUN_EMUL_EXECFD";
          v10 = 0;
        }
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 == 2016 )
      {
        v8 = "Dynamic linker's data segment address";
        v9 = "AT_SUN_LDDATA";
        v10 = 1;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 < 0x7E0 )
      {
        v8 = "String for name of MMU module";
        v9 = "AT_SUN_MMU";
        v10 = 2;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 == 2017 )
      {
        v8 = "AF_SUN_ flags passed from the kernel";
        v9 = "AT_SUN_AUXFLAGS";
        v10 = 1;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      goto LABEL_107;
    }
    if ( a3 == 35 )
    {
      v8 = "L1 Data cache information";
      v9 = "AT_L1D_CACHESHAPE";
      v10 = 1;
      return sub_BC390(a2, v9, v8, v10, a3, a4);
    }
    if ( a3 > 0x23 )
    {
      if ( a3 == 2000 )
      {
        v8 = "Effective user ID";
        v9 = "AT_SUN_UID";
        v10 = 0;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 > 0x7D0 )
      {
        if ( a3 == 2002 )
        {
          v8 = "Effective group ID";
          v9 = "AT_SUN_GID";
          v10 = 0;
        }
        else
        {
          if ( a3 > 0x7D2 )
          {
            v8 = "Real group ID";
            v9 = "AT_SUN_RGID";
          }
          else
          {
            v8 = "Real user ID";
            v9 = "AT_SUN_RUID";
          }
          v10 = 0;
        }
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 == 36 )
      {
        v8 = "L2 cache information";
        v9 = "AT_L2_CACHESHAPE";
        v10 = 1;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 == 37 )
      {
        v8 = "L3 cache information";
        v9 = "AT_L3_CACHESHAPE";
        v10 = 1;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
LABEL_107:
      v8 = "";
      v9 = "???";
      v10 = 1;
      return sub_BC390(a2, v9, v8, v10, a3, a4);
    }
    if ( a3 == 32 )
    {
      v8 = "Special system info/entry points";
      v9 = "AT_SYSINFO";
      v10 = 1;
      return sub_BC390(a2, v9, v8, v10, a3, a4);
    }
    if ( a3 <= 0x20 )
    {
      if ( a3 == 26 )
      {
        v8 = "Extension of AT_HWCAP";
        v9 = "AT_HWCAP2";
        v10 = 1;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      if ( a3 == 31 )
      {
        v8 = "File name of executable";
        v9 = "AT_EXECFN";
        v10 = 2;
        return sub_BC390(a2, v9, v8, v10, a3, a4);
      }
      goto LABEL_107;
    }
    if ( a3 == 33 )
    {
      v8 = "System-supplied DSO's ELF header";
      v9 = "AT_SYSINFO_EHDR";
    }
    else
    {
      v8 = "L1 Instruction cache information";
      v9 = "AT_L1I_CACHESHAPE";
    }
    v10 = 1;
  }
  return sub_BC390(a2, v9, v8, v10, a3, a4);
}
