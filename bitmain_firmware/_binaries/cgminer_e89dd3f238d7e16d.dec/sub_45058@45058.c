int __fastcall sub_45058(int a1, int a2, unsigned int a3, int a4)
{
  char v9[12]; // [sp+18h] [bp-80Ch] BYREF
  _DWORD *v10; // [sp+818h] [bp-Ch] BYREF
  unsigned __int8 v11; // [sp+81Fh] [bp-5h]

  v10 = sub_30CD8();
  v11 = 0;
  sub_34614((int)v10, a2, a4);
  if ( !sub_4428C((int)v10) )
  {
    sub_30E0C((void **)&v10, "cgminer.c", "submit_noffset_nonce", 9187);
    sub_43F18(a1);
  }
  else
  {
    sub_44384(a1, (int)v10);
    if ( dword_90DE0 && byte_90E94 )
      sub_33038((int)v10, a3);
    v11 = 1;
    if ( (unsigned __int8)sub_20AB0(v10 + 48, v10 + 40) != 1 )
    {
      sub_30E0C((void **)&v10, "cgminer.c", "submit_noffset_nonce", 9203);
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
      {
        snprintf(
          v9,
          0x800u,
          "%s %d: Share above target",
          *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
          *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
        sub_1DB6C(6, v9, 0);
      }
    }
    else
    {
      sub_4372C(v10);
    }
  }
  return v11;
}
