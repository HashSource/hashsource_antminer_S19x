int __fastcall sub_2B2958(int a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  char *v4; // r12
  int result; // r0
  int v6; // r12
  unsigned int v7; // r2
  int v8; // r1
  bool v9; // cf

  v3 = dword_41336C[2 * a1];
  v4 = (char *)&dword_41336C[2 * a1];
  result = 0;
  v6 = *((_DWORD *)v4 + 1);
  if ( a2 )
    *a2 = v3;
  if ( a3 )
    *a3 = v6;
  if ( v6 > 0 )
  {
    v7 = *(_DWORD *)(v3 + 4);
    v8 = 0;
    v9 = v7 != 0;
    if ( v7 == 1 )
      goto LABEL_12;
LABEL_7:
    if ( v9 && (result += 4, v7 <= 4) )
    {
      while ( 1 )
      {
        ++v8;
        v3 += 16;
        if ( v6 == v8 )
          break;
        v7 = *(_DWORD *)(v3 + 4);
        v9 = v7 != 0;
        if ( v7 != 1 )
          goto LABEL_7;
LABEL_12:
        result += 2;
      }
    }
    else
    {
      sub_2A6BBC("elf32-arm.c", 4886);
      return 0;
    }
  }
  return result;
}
