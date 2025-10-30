int __fastcall sub_433A8(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r4
  int v8; // r8
  int v9; // r5
  int v10; // r3
  int (*v11)(void); // r6
  int v12; // r0
  int v13; // [sp+Ch] [bp-20h]
  char s[24]; // [sp+14h] [bp-18h] BYREF

  result = sub_3F65C((unsigned int *)a1, 70, 0, 0, a4);
  if ( !a4 )
  {
    if ( dword_245140 <= 0 )
      return result;
    v13 = 0;
    goto LABEL_5;
  }
  result = sub_3C770((unsigned int *)a1, ",\"STATS\":[");
  v13 = result;
  if ( dword_245140 > 0 )
  {
LABEL_5:
    v7 = 0;
    v8 = 0;
    do
    {
      result = sub_56518(v7);
      v9 = result;
      if ( result )
      {
        v10 = *(_DWORD *)(result + 4);
        if ( v10 )
        {
          v11 = *(int (**)(void))(v10 + 28);
          if ( v11 )
          {
            v12 = v11();
            v10 = *(_DWORD *)(v9 + 4);
            v11 = (int (*)(void))v12;
          }
          sprintf(s, "%s%d", *(const char **)(v10 + 8), *(_DWORD *)(v9 + 8));
          result = sub_43158((unsigned int *)a1, v8, s, (const char *)(v9 + 292), (int)v11, a4);
          v8 = result;
        }
      }
      ++v7;
    }
    while ( dword_245140 > v7 );
  }
  if ( v13 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
