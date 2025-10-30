int sub_CDAE0()
{
  int v0; // r0
  int *v1; // r4
  int v2; // r6
  int v3; // t1

  if ( dword_478368 >= (unsigned int)(dword_478368 + 4 * dword_47836C) )
    return 0;
  v0 = *(_DWORD *)dword_478368;
  if ( !*(_DWORD *)dword_478368 )
    return 0;
  v1 = (int *)(dword_478368 + 4);
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(v0 + 39) && (unsigned int)(*(_DWORD *)(*(_DWORD *)(v0 + 16) + 12) - 27) > 2 )
      v2 |= sub_CC420(v0);
    if ( (unsigned int)v1 >= dword_478368 + 4 * dword_47836C )
      break;
    v3 = *v1++;
    v0 = v3;
  }
  while ( v3 );
  return v2;
}
