int __fastcall sub_3C978(int a1, int a2, int a3)
{
  int v3; // r6
  const char *v4; // r7
  int v5; // r5
  char *v8; // r6
  char *v9; // r7
  char *v10; // r4
  char v12[128]; // [sp+0h] [bp-80h] BYREF

  v3 = a2 << 7;
  v4 = (const char *)(a1 + (a2 << 7));
  v5 = a2;
  strncpy(v12, v4, 0x80u);
  if ( v5 < a3 )
  {
    while ( 1 )
    {
      v9 = (char *)(a1 + (a3 << 7));
      while ( strncmp(v12, v9, 0x80u) >= 0 )
      {
        --a3;
        v9 -= 128;
        if ( a3 <= v5 )
        {
          v10 = (char *)(a1 + (a3 << 7));
          v8 = (char *)(v3 + a1);
          strncpy(v8, v10, 0x80u);
          strncpy(v10, v8, 0x80u);
          goto LABEL_7;
        }
      }
      v8 = (char *)(v3 + a1);
      strncpy(v8, v9, 0x80u);
      if ( v5 >= a3 )
        break;
      while ( strncmp(v12, v8, 0x80u) <= 0 )
      {
        ++v5;
        v8 += 128;
        if ( v5 == a3 )
        {
          v8 = (char *)(a1 + (v5 << 7));
          goto LABEL_15;
        }
      }
      strncpy(v9, v8, 0x80u);
      if ( v5 >= a3 )
        goto LABEL_7;
      v3 = v5 << 7;
    }
LABEL_15:
    strncpy(v9, v8, 0x80u);
  }
  else
  {
    v8 = (char *)v4;
  }
LABEL_7:
  strncpy(v8, v12, 0x80u);
  return v5;
}
