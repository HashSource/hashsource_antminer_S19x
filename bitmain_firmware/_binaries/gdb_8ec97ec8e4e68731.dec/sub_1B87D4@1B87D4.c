char *__fastcall sub_1B87D4(int a1)
{
  char *result; // r0

  result = *(char **)(a1 + 36);
  if ( result )
  {
    switch ( *(_DWORD *)(*((_DWORD *)result + 1) + 4) )
    {
      case 0:
        result = "unknown file format";
        break;
      case 1:
        result = "a.out";
        break;
      case 2:
        result = "COFF";
        break;
      case 3:
        result = "ECOFF";
        break;
      case 4:
        result = "XCOFF";
        break;
      case 5:
        result = "ELF";
        break;
      case 6:
        result = "IEEE";
        break;
      case 7:
        result = "NLM";
        break;
      case 8:
        result = "Oasys";
        break;
      case 9:
        result = "Tekhex";
        break;
      case 0xA:
        result = "Srec";
        break;
      case 0xB:
        result = "Verilog";
        break;
      case 0xC:
        result = "Ihex";
        break;
      case 0xD:
        result = "SOM";
        break;
      case 0xE:
        result = "OS9K";
        break;
      case 0xF:
        result = "Versados";
        break;
      case 0x10:
        result = "MSDOS";
        break;
      case 0x11:
        result = "Ovax";
        break;
      case 0x12:
        result = "Evax";
        break;
      case 0x13:
        result = "mmo";
        break;
      case 0x14:
        result = "MACH_O";
        break;
      case 0x15:
        result = "PEF";
        break;
      case 0x16:
        result = "PEF_XLIB";
        break;
      case 0x17:
        result = "SYM";
        break;
      default:
        sub_2A6BF0("./targets.c", 1918, "bfd_flavour_name");
    }
  }
  return result;
}
