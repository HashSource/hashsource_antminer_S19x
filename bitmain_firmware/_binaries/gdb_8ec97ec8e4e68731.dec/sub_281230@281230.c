int __fastcall sub_281230(int a1, int a2)
{
  int v3; // r0

  if ( dword_48AB0C )
  {
    v3 = sub_2978A8(a1) + dword_4707AC - a1;
    if ( v3 <= 0 )
      sub_2975C8(0);
    else
      sub_2974E4(v3, a2);
    return 0;
  }
  else
  {
    ((void (*)(void))sub_2975C8)();
    return 0;
  }
}
