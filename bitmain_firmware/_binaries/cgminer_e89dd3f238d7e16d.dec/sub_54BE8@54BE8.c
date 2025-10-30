int __fastcall sub_54BE8(int a1, size_t *a2)
{
  _BYTE *v4; // [sp+4h] [bp-8h]

  v4 = (_BYTE *)(a1 + *a2);
  if ( *v4 == 32 || *v4 == 61 || !*v4 )
    return 0;
  else
    return sub_54B9C((int)(v4 + 1), a2);
}
