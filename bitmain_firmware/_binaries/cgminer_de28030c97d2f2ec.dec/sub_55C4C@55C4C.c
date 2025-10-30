_BYTE *__fastcall sub_55C4C(int a1, _DWORD *a2)
{
  _BYTE *i; // [sp+4h] [bp-10h]
  size_t v5; // [sp+Ch] [bp-8h] BYREF

  v5 = 1;
  for ( i = (_BYTE *)sub_559B8(a1, a2, &v5); i && *i == 45; i = (_BYTE *)sub_559B8((int)i, a2, &v5) )
    ;
  return i;
}
