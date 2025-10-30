int __fastcall sub_7486C(int a1, unsigned int a2, __int64 a3)
{
  int v3; // r4
  __int64 v5; // r6
  int v6; // r10
  char *v7; // r5
  char *v8; // r4
  int v9; // r2
  __int64 v10; // r0
  _DWORD *v11; // r4
  int v12; // r3
  char v13; // t1
  char v15; // [sp+3h] [bp-49h] BYREF
  _DWORD v16[18]; // [sp+4h] [bp-48h] BYREF

  v3 = a2;
  v5 = a3;
  memset(v16, 0, 65);
  if ( a2 )
  {
    if ( a2 >= 0x41 )
      v3 = 65;
    v6 = v3 - 1;
    if ( v3 == 1 )
    {
      if ( !a3 )
      {
LABEL_11:
        *(_BYTE *)(a1 + v6) = 0;
        return 1;
      }
    }
    else
    {
      v7 = (char *)v16 + v3 - 2;
      v8 = &v15;
      do
      {
        sub_189928(v5, HIDWORD(v5), 36, 0);
        *++v8 = *((_BYTE *)&dword_1A5560 + v9 + 64);
        v10 = sub_189928(v5, HIDWORD(v5), 36, 0);
        v5 = v10;
      }
      while ( v8 != v7 );
      if ( !v10 )
      {
        v11 = v8 + 1;
        v12 = a1 - 1;
        do
        {
          v13 = *((_BYTE *)v11 - 1);
          v11 = (_DWORD *)((char *)v11 - 1);
          *(_BYTE *)++v12 = v13;
        }
        while ( v16 != v11 );
        goto LABEL_11;
      }
    }
  }
  return 0;
}
