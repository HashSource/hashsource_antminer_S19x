void __fastcall sub_590F4(_BYTE *a1)
{
  int v1; // r0
  int v2; // r6
  int v3; // r5
  int v4; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // [sp+0h] [bp-8h] BYREF
  _DWORD *v7; // [sp+4h] [bp-4h] BYREF

  dword_474808 = 1;
  sub_57E90(&v6, 3, a1);
  v1 = (int)v6;
  if ( v6 )
  {
    dword_47480C = 1;
    v2 = dword_487668;
    v3 = *(_DWORD *)(dword_487668 + 36);
    v4 = dword_487668 + 36;
    *(_DWORD *)(dword_487668 + 36) = 0;
    sub_58FE8(v1);
    v5 = v6;
    if ( v4 )
      *(_DWORD *)(v2 + 36) = v3;
    if ( v5 )
    {
      v7 = v5;
      sub_57E18(&v7);
    }
  }
}
