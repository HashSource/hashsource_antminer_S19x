int __fastcall sub_BB160(_DWORD *a1, _DWORD *a2)
{
  size_t v5; // r6

  if ( a2[33] == -1 || !sub_D8804(*a1, *a2) )
    return 0;
  v5 = sub_D8904(*a2);
  memcpy(a1 + 1, a2 + 1, v5);
  memcpy(a1 + 9, a2 + 9, v5);
  memcpy(a1 + 17, a2 + 17, v5);
  memcpy(a1 + 25, a2 + 25, v5);
  a1[33] = a2[33];
  return 1;
}
