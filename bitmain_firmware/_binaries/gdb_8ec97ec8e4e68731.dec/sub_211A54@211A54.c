int __fastcall sub_211A54(int a1)
{
  unsigned int v1; // r1
  bool v2; // cc
  _DWORD *v3; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v2 = v1 > 0xC;
  if ( v1 != 12 )
    v2 = v1 - 9 > 1;
  if ( !v2 )
    return 0;
  v3 = (_DWORD *)dword_4896B4;
  if ( dword_4896B4 == dword_4896B8 )
LABEL_10:
    sub_946E0("I'm sorry, Dave, I can't do that.  Symbol format `%s' unknown.", *(const char **)a1);
  while ( v1 != *v3 )
  {
    v3 += 2;
    if ( (_DWORD *)dword_4896B8 == v3 )
      goto LABEL_10;
  }
  return v3[1];
}
