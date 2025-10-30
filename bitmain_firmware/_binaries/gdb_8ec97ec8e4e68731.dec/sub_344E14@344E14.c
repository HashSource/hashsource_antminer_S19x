void *__fastcall sub_344E14(unsigned int a1, int a2)
{
  void *v2; // r3
  unsigned int *v6; // r0
  unsigned int *v7; // r6

  if ( !a1 )
    return &unk_48FF24;
  v6 = sub_344DB4(a1, 0);
  v7 = v6;
  v2 = v6 + 3;
  if ( a1 != 1 )
  {
    v2 = memset(v6 + 3, a2, a1);
    if ( v7 == (unsigned int *)&std::string::_Rep::_S_empty_rep_storage )
      return v2;
    goto LABEL_8;
  }
  *((_BYTE *)v6 + 12) = a2;
  if ( v6 != (unsigned int *)&std::string::_Rep::_S_empty_rep_storage )
  {
LABEL_8:
    *v7 = a1;
    v7[2] = 0;
    *((_BYTE *)v7 + a1 + 12) = 0;
  }
  return v2;
}
