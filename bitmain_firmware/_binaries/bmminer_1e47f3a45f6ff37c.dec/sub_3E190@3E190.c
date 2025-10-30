void *__fastcall sub_3E190(_DWORD *a1, _DWORD *a2)
{
  int v2; // r12

  v2 = *a1 - *a2;
  if ( v2 > 3600 )
    return &unk_36EE80;
  else
    return (void *)((a1[1] - a2[1]) / 1000 + 1000 * v2);
}
