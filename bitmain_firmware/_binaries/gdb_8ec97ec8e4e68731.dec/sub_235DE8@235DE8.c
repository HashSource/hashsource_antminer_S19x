_DWORD *sub_235DE8()
{
  int *v0; // r4
  _DWORD *result; // r0
  int v2; // r4
  _DWORD *v3; // r0
  int v4; // r4
  _DWORD *v5; // r0
  int v6[7]; // [sp+14h] [bp-1Ch] BYREF

  v0 = (int *)sub_183688();
  result = (_DWORD *)v0[41];
  if ( !result )
    goto LABEL_10;
  while ( *result )
  {
    v2 = sub_183688();
    v3 = *(_DWORD **)(v2 + 164);
    if ( !v3 )
    {
      v3 = sub_93094(1u, 0xCu);
      *(_DWORD *)(v2 + 164) = v3;
    }
    *v3 = 0;
    v4 = sub_183688();
    v5 = *(_DWORD **)(v4 + 164);
    if ( !v5 )
    {
      v5 = sub_93094(1u, 0xCu);
      *(_DWORD *)(v4 + 164) = v5;
    }
    v0 = v6;
    v5[1] = 0;
    sub_B8668(v6);
    result = (_DWORD *)sub_B81A8(v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6]);
    if ( result )
      break;
    sub_94700((int)"target-descriptions.c", 852, "Could not remove target-supplied description");
LABEL_10:
    result = sub_93094(1u, 0xCu);
    v0[41] = (int)result;
  }
  return result;
}
