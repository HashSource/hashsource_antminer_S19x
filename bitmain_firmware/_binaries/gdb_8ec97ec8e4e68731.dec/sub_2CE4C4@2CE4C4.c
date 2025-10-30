int __fastcall sub_2CE4C4(int result, FILE *s, int a3, size_t size)
{
  int v4; // r6
  int *v7; // r3
  int v8; // r7
  int (*v9)(void); // r3
  const char *v10; // r8
  int v11; // r3
  int v12; // r2
  const char *v13; // r0
  const char *v14; // r6
  signed int v15; // r6
  unsigned int v16; // [sp+4h] [bp-4h] BYREF

  v4 = result;
  if ( size == 1 )
  {
    fwrite("elf ", 1u, 4u, s);
    sub_2A7C90(v4, s, *(_DWORD *)(a3 + 8));
    return fprintf(s, " %x", *(_DWORD *)(a3 + 12));
  }
  else if ( size )
  {
    if ( size == 2 )
    {
      v7 = *(int **)(a3 + 16);
      if ( v7 )
        v8 = *v7;
      else
        v8 = 40916;
      if ( !v7 )
        HIWORD(v8) = 65;
      v9 = *(int (**)(void))(*(_DWORD *)(*(_DWORD *)(result + 4) + 444) + 204);
      if ( !v9 || (v10 = (const char *)v9()) == 0 )
      {
        v10 = *(const char **)(a3 + 4);
        sub_302AEC(v4, s, a3);
      }
      fprintf(s, " %s\t", (const char *)v8);
      v11 = *(_DWORD *)(a3 + 16);
      if ( v11 && (*(_DWORD *)(v11 + 20) & 0x1000) != 0 )
        v12 = *(_DWORD *)(a3 + 24);
      else
        v12 = *(_DWORD *)(a3 + 28);
      sub_2A7C90(v4, s, v12);
      v13 = sub_2CE3F0(v4, a3, &v16);
      v14 = v13;
      if ( v13 )
      {
        if ( v16 )
        {
          fprintf(s, " (%s)", v13);
          v15 = 10 - strlen(v14);
          if ( v15 > 0 )
          {
            do
            {
              IO_putc(32, s);
              --v15;
            }
            while ( v15 );
          }
        }
        else
        {
          fprintf(s, "  %-11s", v13);
        }
      }
      switch ( *(_BYTE *)(a3 + 37) )
      {
        case 0:
          return fprintf(s, " %s", v10);
        case 1:
          fwrite(" .internal", 1u, 0xAu, s);
          break;
        case 2:
          fwrite(" .hidden", 1u, 8u, s);
          break;
        case 3:
          fwrite(" .protected", 1u, 0xBu, s);
          break;
        default:
          fprintf(s, " 0x%02x", *(unsigned __int8 *)(a3 + 37));
          break;
      }
      return fprintf(s, " %s", v10);
    }
  }
  else
  {
    return fputs(*(const char **)(a3 + 4), s);
  }
  return result;
}
