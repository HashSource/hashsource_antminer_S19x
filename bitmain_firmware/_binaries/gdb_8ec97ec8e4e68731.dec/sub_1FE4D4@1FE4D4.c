int __fastcall sub_1FE4D4(int result, int a2, int a3)
{
  _BYTE *v3; // r6
  int v4; // r4
  int v5; // r7

  v3 = (_BYTE *)result;
  v4 = dword_48938C;
  if ( (int *)dword_48938C == &dword_48938C )
    goto LABEL_9;
  v5 = 0;
  do
  {
    if ( !v3 || (result = sub_5AF7C(v3, *(_DWORD *)(v4 + 8), a3)) != 0 )
    {
      v5 = 1;
      *(_BYTE *)(v4 + 104) = 1;
    }
    v4 = *(_DWORD *)v4;
  }
  while ( (int *)v4 != &dword_48938C );
  if ( !v5 )
LABEL_9:
    sub_946E0("No skiplist entries found with number %s.", v3);
  return result;
}
