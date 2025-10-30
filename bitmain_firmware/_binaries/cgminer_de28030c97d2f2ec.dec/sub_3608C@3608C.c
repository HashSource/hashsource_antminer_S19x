unsigned __int64 __fastcall sub_3608C(int a1)
{
  double v1; // d0
  double v2; // r0
  char v5[4]; // [sp+10h] [bp-824h] BYREF
  unsigned __int64 v6; // [sp+810h] [bp-24h]
  double v7; // [sp+818h] [bp-1Ch]
  double v8; // [sp+820h] [bp-14h]
  char v9; // [sp+82Fh] [bp-5h]

  v9 = 0;
  v7 = 2.69595353e67;
  v2 = sub_33CF4((_DWORD *)(a1 + 192));
  v8 = v1;
  if ( v1 == 0.0 )
    v8 = 0.0;
  round(LODWORD(v2), HIDWORD(v2));
  v6 = sub_68F40(COERCE_UNSIGNED_INT64(v7 / v8), HIDWORD(COERCE_UNSIGNED_INT64(v7 / v8)));
  sub_2E980((int)&unk_95310, "cgminer.c", "share_diff", 5213);
  if ( v6 > *(_QWORD *)&dbl_87E70 )
  {
    v9 = 1;
    *(_QWORD *)&dbl_87E70 = v6;
    sub_32154(v6, a0_1, 8u, 0);
  }
  if ( *(_QWORD *)(*(_DWORD *)(a1 + 260) + 368) < v6 )
    *(_QWORD *)(*(_DWORD *)(a1 + 260) + 368) = v6;
  sub_2EA74((int)&unk_95310, "cgminer.c", "share_diff", 5227);
  if ( v9 && (byte_91F58 || byte_87769 || dword_8697C > 5) )
  {
    snprintf(v5, 0x800u, "New best share: %s", a0_1);
    sub_1E4EC(6, v5, 0);
  }
  return v6;
}
