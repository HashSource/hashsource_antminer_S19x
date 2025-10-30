int __fastcall sub_B8A68(int *a1, int a2)
{
  int v2; // r6
  char v3; // r5
  int v4; // r7
  int v7; // r0

  if ( a2 < 0 )
    return 0;
  v2 = a2 >> 6;
  v3 = a2 & 0x3F;
  if ( a2 >> 6 < a1[1] )
  {
    v4 = *a1;
LABEL_4:
    *(_DWORD *)(v4 + 4 * v2) |= 1 << v3;
    return 1;
  }
  if ( sub_B89D8((int)a1, v2 + 1) )
  {
    v7 = a1[1];
    v4 = *a1;
    if ( v2 >= v7 )
      memset((void *)(v4 + 4 * v7), 0, 4 * (1 - v7 + v2));
    a1[1] = v2 + 1;
    goto LABEL_4;
  }
  return 0;
}
