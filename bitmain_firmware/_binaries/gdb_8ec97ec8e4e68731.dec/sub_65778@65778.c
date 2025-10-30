int __fastcall sub_65778(int a1, int a2, int a3)
{
  int v3; // r5

  if ( a3 )
    sub_946E0("-list-target-features should be passed no arguments");
  v3 = *(_DWORD *)sub_242FDC(a1);
  sub_2578AC(v3, 1);
  if ( dword_474864 && off_489AF8(&dword_4899A0) )
    sub_2575E8(v3, 0, "async");
  if ( off_489B48(&dword_4899A0) )
    sub_2575E8(v3, 0, "reverse");
  return sub_25734C(v3, 1);
}
