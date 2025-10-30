int __fastcall sub_1BB20(int a1)
{
  *(_QWORD *)&dword_2463D0 = sub_7794C(
                               COERCE_UNSIGNED_INT64(dbl_242EF0 + dbl_242F10 + dbl_246238),
                               HIDWORD(COERCE_UNSIGNED_INT64(dbl_242EF0 + dbl_242F10 + dbl_246238)));
  if ( *(_QWORD *)&dword_2463D0 + dword_242EE8 )
    sub_778B4();
  return sub_4402C(a1, "Device Hardware%");
}
