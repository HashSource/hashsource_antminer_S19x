int __fastcall sub_CF724(int a1, unsigned int a2)
{
  int *v4; // r0
  int *v5; // r4
  int v6; // r0
  int *v7; // r4
  int v8; // t1

  v4 = (int *)sub_CC504(a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( (unsigned int)v4 >= dword_478368 + 4 * dword_47836C )
    return 0;
  v6 = *v4;
  if ( a2 != *(_DWORD *)(*v5 + 52) )
    return 0;
  v7 = v5 + 1;
  while ( *(_DWORD *)(v6 + 12) || !sub_CF600(v6, a1, a2) )
  {
    if ( (unsigned int)v7 < dword_478368 + 4 * dword_47836C )
    {
      v8 = *v7++;
      v6 = v8;
      if ( *(_DWORD *)(v8 + 52) == a2 )
        continue;
    }
    return 0;
  }
  return 1;
}
