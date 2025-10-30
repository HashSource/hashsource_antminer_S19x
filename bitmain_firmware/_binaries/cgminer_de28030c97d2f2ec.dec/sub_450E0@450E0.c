int __fastcall sub_450E0(int a1, int a2)
{
  double v2; // r0
  int v3; // r4
  double v4; // r0
  int v5; // r4
  double v6; // r0
  int v7; // r4
  char v11[20]; // [sp+8h] [bp-814h] BYREF
  double v12; // [sp+808h] [bp-14h]

  v12 = dbl_86C78;
  *(_QWORD *)(a2 + 232) = sub_3608C(a2);
  if ( sub_68E74(*(_DWORD *)(a2 + 232), *(_DWORD *)(a2 + 236)) >= v12 )
  {
    *(_BYTE *)(a2 + 283) = 1;
    ++*(_DWORD *)(*(_DWORD *)(a2 + 260) + 32);
    ++dword_9523C;
    *(_BYTE *)(a2 + 282) = 1;
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v11, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 260));
      sub_1E4EC(5, v11, 0);
    }
  }
  sub_2E354(&stru_91F5C, "cgminer.c", "update_work_stats", 8915);
  v2 = sub_68E84(LODWORD(dbl_91F90), HIDWORD(dbl_91F90));
  *(_QWORD *)&dbl_91F90 = sub_68F1C(
                            COERCE_UNSIGNED_INT64(v2 + *(double *)(a2 + 224)),
                            HIDWORD(COERCE_UNSIGNED_INT64(v2 + *(double *)(a2 + 224))));
  v3 = *(_DWORD *)(a1 + 36);
  v4 = sub_68E84(*(_DWORD *)(v3 + 192), *(_DWORD *)(v3 + 196));
  *(_QWORD *)(v3 + 192) = sub_68F1C(
                            COERCE_UNSIGNED_INT64(v4 + *(double *)(a2 + 224)),
                            HIDWORD(COERCE_UNSIGNED_INT64(v4 + *(double *)(a2 + 224))));
  v5 = *(_DWORD *)(a2 + 260);
  v6 = sub_68E84(*(_DWORD *)(v5 + 40), *(_DWORD *)(v5 + 44));
  *(_QWORD *)(v5 + 40) = sub_68F1C(
                           COERCE_UNSIGNED_INT64(v6 + *(double *)(a2 + 224)),
                           HIDWORD(COERCE_UNSIGNED_INT64(v6 + *(double *)(a2 + 224))));
  v7 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v7 + 232) = time(0);
  return sub_2E484(&stru_91F5C, "cgminer.c", "update_work_stats", 8920);
}
