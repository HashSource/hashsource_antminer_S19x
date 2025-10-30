int __fastcall sub_95DA4(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(result + 80);
  if ( a2 )
    *(_DWORD *)(result + 80) = v2 + 1;
  else
    *(_DWORD *)(result + 80) = v2 - 1;
  return result;
}
