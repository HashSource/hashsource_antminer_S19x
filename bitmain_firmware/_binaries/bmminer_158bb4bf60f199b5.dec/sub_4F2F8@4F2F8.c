int __fastcall sub_4F2F8(int a1)
{
  int v3; // r5

  if ( *(_BYTE *)(a1 + 641) )
    sub_4AFA8(a1);
  if ( sub_4D754((_DWORD *)a1) && (!*(_BYTE *)(a1 + 580) || sub_50338(a1)) && (v3 = sub_50730(a1)) != 0 )
  {
    sub_58490(a1);
    return v3;
  }
  else
  {
    sub_5A31C(a1);
    return 0;
  }
}
