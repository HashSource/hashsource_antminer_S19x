void **__fastcall sub_16FD74(int a1, _DWORD *a2, void **a3)
{
  void **v6; // r5
  int v7; // r4
  int *v8; // r0
  void **result; // r0
  bool v10; // cc
  unsigned int v11; // r1

  v6 = a3;
  v7 = 0;
  while ( 1 )
  {
    v10 = v7 < sub_10C010((int)a2);
    v11 = v7++;
    if ( !v10 )
    {
      result = v6;
      if ( !v6 )
        return sub_10BFCC();
      return result;
    }
    v8 = (int *)sub_10C01C(a2, v11);
    result = sub_16FB84(a1, v8, v6);
    if ( !result )
      break;
    v6 = result;
  }
  if ( !a3 )
  {
    sub_10BFDC((int)v6, (void (__fastcall *)(int))X509V3_conf_free);
    return 0;
  }
  return result;
}
