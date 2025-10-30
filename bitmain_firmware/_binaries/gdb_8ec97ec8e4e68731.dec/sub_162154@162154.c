int __fastcall sub_162154(int a1, int a2)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r6
  char *v5; // r0
  int v6; // r2
  int v7; // r3

  v2 = *(_DWORD **)a1;
  v4 = *(_DWORD **)(*(_DWORD *)a1 + 164);
  sub_2578AC(a2, 0);
  sub_257504(a2, "refcount", *v4);
  v5 = sub_98EEC((int)v2);
  sub_2575E8(a2, "addr", v5);
  sub_2575E8(a2, "filename", *v2);
  sub_257380(a2, &word_356638, v6, v7);
  sub_25734C(a2, 0);
  return 1;
}
