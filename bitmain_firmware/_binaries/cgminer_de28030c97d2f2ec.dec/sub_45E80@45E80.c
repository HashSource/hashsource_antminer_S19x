int __fastcall sub_45E80(int a1, int a2, unsigned int a3, int a4)
{
  char v9[12]; // [sp+18h] [bp-80Ch] BYREF
  _DWORD *v10; // [sp+818h] [bp-Ch] BYREF
  unsigned __int8 v11; // [sp+81Fh] [bp-5h]

  v10 = sub_31E10();
  v11 = 0;
  sub_3567C((int)v10, a2, a4);
  if ( !sub_45004((int)v10, a3) )
  {
    sub_31F40((void **)&v10, "cgminer.c", "submit_noffset_nonce", 9187);
    sub_44CA8(a1);
  }
  else
  {
    sub_450E0(a1, (int)v10);
    if ( dword_91F78 && byte_9202C )
      sub_340D0((int)v10, a3);
    v11 = 1;
    if ( (unsigned __int8)sub_21358(v10 + 48, v10 + 40) != 1 )
    {
      sub_31F40((void **)&v10, "cgminer.c", "submit_noffset_nonce", 9203);
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        snprintf(
          v9,
          0x800u,
          "%s %d: Share above target",
          *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
          *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
        sub_1E4EC(6, v9, 0);
      }
    }
    else
    {
      sub_444C0(v10);
    }
  }
  return v11;
}
