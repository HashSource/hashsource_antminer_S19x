_DWORD *__fastcall sub_3DC10(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // lr
  int v4; // r3

  v2 = *result + *a2;
  v3 = a2[1];
  *a2 = v2;
  v4 = result[1] + v3;
  a2[1] = v4;
  if ( v4 > (int)&unk_F423F )
  {
    *a2 = v2 + 1;
    a2[1] = v4 - 1000000;
  }
  return result;
}
