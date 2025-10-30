void __fastcall sub_54A30(int a1, int a2, char *s, int a4, int a5)
{
  int v7; // r7
  int v8; // r8
  size_t v9; // r6
  int v10; // r4
  int v11; // r9
  const char *v12; // r11
  void *ptr[2]; // [sp+14h] [bp-8h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = strlen(s);
  if ( !a1 )
    goto LABEL_19;
LABEL_2:
  v10 = a1;
  v11 = 0;
  do
  {
    while ( 1 )
    {
      v12 = *(const char **)(v10 + 4);
      if ( strncmp(v12, s, v9) || (*(_BYTE *)(v10 + 12) & 0x40) != 0 )
        break;
      if ( !a5 || *(_DWORD *)(v10 + 16) || *(_DWORD *)(v10 + 52) )
      {
        if ( !v8 && (*(_BYTE *)(v10 + 12) & 1) != 0 )
        {
          v7 = 1;
          break;
        }
        sub_F574C(ptr, v12, s, a4);
        sub_F6C90(a2, ptr, 0);
        if ( ptr[0] )
          free(ptr[0]);
        v10 = *(_DWORD *)v10;
        if ( !v10 )
          return;
        v11 = 1;
      }
      else
      {
        v10 = *(_DWORD *)v10;
        if ( !v10 )
          goto LABEL_15;
      }
    }
    v10 = *(_DWORD *)v10;
  }
  while ( v10 );
LABEL_15:
  while ( !(v11 | v7 ^ 1) )
  {
    v7 = 1;
    if ( v8 == 1 )
      break;
    v8 = 1;
    if ( a1 )
      goto LABEL_2;
LABEL_19:
    v11 = a1;
  }
}
