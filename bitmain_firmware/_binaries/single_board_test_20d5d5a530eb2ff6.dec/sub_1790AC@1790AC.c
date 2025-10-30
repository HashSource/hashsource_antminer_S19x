bool __fastcall sub_1790AC(int a1, _DWORD *a2, int a3)
{
  int *v6; // r0
  int *v7; // r4
  int v8; // r5
  _BOOL4 v9; // r5
  int v11; // r3
  size_t n; // [sp+Ch] [bp-48h] BYREF
  char v13[68]; // [sp+10h] [bp-44h] BYREF

  v6 = (int *)sub_D14F4();
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    if ( sub_139328(v6, a2, *(_DWORD **)(v8 + 4)) && sub_D16E4(v7, (int)v13, &n) > 0 )
    {
      if ( !a3 )
      {
        v9 = sub_AE088(*(size_t **)(v8 + 12), v13, n) != 0;
        goto LABEL_4;
      }
      v11 = *(_DWORD *)(v8 + 12);
      if ( *(_DWORD *)v11 != n )
      {
        v9 = 0;
        sub_D0048(46, 117, 121, (int)"crypto/cms/cms_dd.c", 79);
        goto LABEL_4;
      }
      v9 = 1;
      if ( !memcmp(v13, *(const void **)(v11 + 8), *(_DWORD *)v11) )
      {
LABEL_4:
        sub_D1504(v7);
        return v9;
      }
      sub_D0048(46, 117, 158, (int)"crypto/cms/cms_dd.c", 85);
    }
    v9 = 0;
    goto LABEL_4;
  }
  sub_D0048(46, 117, 65, (int)"crypto/cms/cms_dd.c", 64);
  sub_D1504(0);
  return 0;
}
