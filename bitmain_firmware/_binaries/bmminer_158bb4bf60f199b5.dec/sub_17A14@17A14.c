int __fastcall sub_17A14(char *a1, char *a2, size_t n)
{
  int v3; // r6
  int v6; // r8
  char *v7; // r11
  int v8; // r5
  bool v9; // zf
  const void *v10; // r0
  int v12; // [sp+0h] [bp-14h]
  __int16 v14; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  v12 = 0;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v3 + 4) == 1 )
      {
        v6 = *(unsigned __int8 *)(dword_A0D68 + 12935);
        if ( *(_BYTE *)(dword_A0D68 + 12935) )
          break;
      }
LABEL_2:
      ++v3;
      a2 += n;
      if ( v3 == 16 )
        return v12;
    }
    v7 = a1;
    v8 = 0;
    while ( 1 )
    {
      ++v8;
      v9 = memcmp(v7, &v14, n) == 0;
      v10 = v7;
      if ( v9 )
        break;
      v7 += n;
      if ( !memcmp(v10, a2, n) || v6 == v8 )
        goto LABEL_2;
    }
    memcpy(v7, a2, n);
    ++v3;
    a2 += n;
    v12 = (unsigned __int8)(v12 + 1);
  }
  while ( v3 != 16 );
  return v12;
}
