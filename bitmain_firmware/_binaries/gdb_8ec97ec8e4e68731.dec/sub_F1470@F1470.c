int __fastcall sub_F1470(int a1)
{
  int v2; // r7
  _DWORD *v3; // r5
  int v4; // r1
  int result; // r0

  v2 = dword_4789B8;
  v3 = (_DWORD *)dword_4789BC;
  if ( a1 >= dword_4789B8 )
  {
    v4 = 2 * dword_4789B8;
    if ( a1 >= 2 * dword_4789B8 )
      v4 = 2 * a1;
    dword_4789B8 = v4;
    v3 = sub_93050((void *)dword_4789BC, 4 * v4);
    dword_4789BC = (int)v3;
    memset(&v3[v2], 0, 4 * (dword_4789B8 - v2));
  }
  result = v3[a1];
  if ( !result )
  {
    result = ((int (__fastcall *)(int))loc_16FD44)(dword_4789C0);
    v3[a1] = result;
  }
  return result;
}
