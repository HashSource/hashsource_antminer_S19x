int __fastcall sub_44384(int a1, int a2)
{
  double v2; // r0
  double v3; // r0
  int v4; // r4
  double v5; // r0
  int v6; // r4
  int v7; // r4
  char v11[20]; // [sp+8h] [bp-814h] BYREF
  double v12; // [sp+808h] [bp-14h]

  v12 = dbl_85AE0;
  *(_QWORD *)(a2 + 232) = sub_35030(a2);
  if ( v12 <= sub_68204(*(_DWORD *)(a2 + 232), *(_DWORD *)(a2 + 236)) )
  {
    *(_BYTE *)(a2 + 283) = 1;
    ++*(_DWORD *)(*(_DWORD *)(a2 + 260) + 32);
    ++dword_940A4;
    *(_BYTE *)(a2 + 282) = 1;
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(v11, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 260));
      sub_1DB6C(5, v11, 0);
    }
  }
  sub_2D2FC(&stru_90DC4, "cgminer.c", "update_work_stats", 8915);
  v2 = sub_68214(qword_90DF8, HIDWORD(qword_90DF8));
  qword_90DF8 = sub_682AC(
                  COERCE_UNSIGNED_INT64(v2 + *(double *)(a2 + 224)),
                  HIDWORD(COERCE_UNSIGNED_INT64(v2 + *(double *)(a2 + 224))));
  v3 = sub_68214(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 192), *(_DWORD *)(*(_DWORD *)(a1 + 36) + 196));
  v4 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v4 + 192) = sub_682AC(
                            COERCE_UNSIGNED_INT64(v3 + *(double *)(a2 + 224)),
                            HIDWORD(COERCE_UNSIGNED_INT64(v3 + *(double *)(a2 + 224))));
  v5 = sub_68214(*(_DWORD *)(*(_DWORD *)(a2 + 260) + 40), *(_DWORD *)(*(_DWORD *)(a2 + 260) + 44));
  v6 = *(_DWORD *)(a2 + 260);
  *(_QWORD *)(v6 + 40) = sub_682AC(
                           COERCE_UNSIGNED_INT64(v5 + *(double *)(a2 + 224)),
                           HIDWORD(COERCE_UNSIGNED_INT64(v5 + *(double *)(a2 + 224))));
  v7 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v7 + 232) = time(0);
  return sub_2D434(&stru_90DC4, "cgminer.c", "update_work_stats", 8920);
}
