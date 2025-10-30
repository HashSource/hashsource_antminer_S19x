int __fastcall sub_B9570(_DWORD *a1)
{
  int v2; // r4
  const char *v3; // r2
  int v4; // r2
  int v5; // r3
  const char *v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3

  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_2578AC(v2, 0);
  v3 = "Yes";
  if ( !a1[2] )
    v3 = "No";
  sub_2575E8(v2, "loaded", v3);
  sub_2575E8(v2, "script", *a1);
  sub_257380(v2, &word_356638, v4, v5);
  v6 = (const char *)a1[1];
  if ( !v6 || !strcmp((const char *)*a1, v6) )
    return sub_25734C(v2, 0);
  sub_257380(v2, "\tfull name: ", v7, v8);
  sub_2575E8(v2, "full_path", a1[1]);
  sub_257380(v2, &word_356638, v9, v10);
  return sub_25734C(v2, 0);
}
