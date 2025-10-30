int __fastcall sub_26FD6C(int result, int *a2)
{
  int v2; // r4

  v2 = result;
  if ( a2 && !a2[19] )
  {
    if ( !a2[20] || !*(_BYTE *)(a2[26] + 33) )
      goto LABEL_4;
  }
  else if ( !*(_BYTE *)(a2[26] + 33) )
  {
LABEL_4:
    *(_QWORD *)result = (unsigned int)(result + 8);
    *(_BYTE *)(result + 8) = 0;
    return result;
  }
  sub_255DE4((_DWORD *)result, a2[19]);
  return v2;
}
