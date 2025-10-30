int __fastcall sub_327A48(int *a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  int v4; // r1
  bool v5; // zf
  int result; // r0

  v3 = *a3;
  if ( *a2 > (int)&loc_F423C + 3 || a2[1] > (int)&loc_F423C + 3 || (int)a2[2] < -999999 )
  {
    *a3 = v3 | 0x40;
    return (v3 | 0x40) != v3;
  }
  v4 = *a1;
  if ( *a1 > (int)&loc_F423C + 3 )
    goto LABEL_9;
  if ( (unsigned int)(v4 + a1[1] + 1999996) <= 0x2DC6BC )
    return 0;
  v5 = v4 == 1;
  if ( v4 == 1 )
    v5 = *((unsigned __int16 *)a1 + 5) == 0;
  if ( !v5 || (result = a1[2] & 0x70) != 0 )
  {
LABEL_9:
    *a3 = v3 | 0x80;
    return (v3 | 0x80) != v3;
  }
  return result;
}
