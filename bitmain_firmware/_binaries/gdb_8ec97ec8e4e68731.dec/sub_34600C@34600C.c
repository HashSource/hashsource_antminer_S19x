void *__fastcall sub_34600C(_BYTE *a1, _BYTE *a2)
{
  size_t v2; // r5
  size_t *v4; // r0
  size_t *v5; // r7
  void *v6; // r3

  if ( a2 == a1 )
    return &unk_48FF24;
  v2 = a2 - a1;
  v4 = sub_344DB4(a2 - a1, 0);
  v5 = v4;
  v6 = v4 + 3;
  if ( v2 == 1 )
  {
    *((_BYTE *)v4 + 12) = *a1;
  }
  else if ( v2 )
  {
    v6 = memcpy(v4 + 3, a1, v2);
  }
  if ( v5 != (size_t *)&std::string::_Rep::_S_empty_rep_storage )
  {
    *v5 = v2;
    v5[2] = 0;
    *((_BYTE *)v5 + v2 + 12) = 0;
  }
  return v6;
}
