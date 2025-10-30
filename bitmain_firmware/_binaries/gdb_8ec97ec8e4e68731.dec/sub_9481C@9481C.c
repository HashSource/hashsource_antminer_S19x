int __fastcall sub_9481C(__int64 a1, int *a2)
{
  int v2; // r12
  int v3; // r0
  int v4; // r3
  int v5; // lr
  __int64 v6; // r0

  if ( *(_DWORD *)(HIDWORD(a1) + 148) == (_DWORD)a1 )
  {
    if ( (*(_DWORD *)(HIDWORD(a1) + 20) & 1) != 0 )
    {
      v2 = *(_DWORD *)(HIDWORD(a1) + 28);
      v3 = *(_DWORD *)(HIDWORD(a1) + 36);
      *(_DWORD *)(*a2 + 12) = 0;
      v4 = *a2;
      LODWORD(a1) = v3 + v2;
      v5 = *a2 + 16;
      *(_QWORD *)(v4 + 4) = a1;
      *(_DWORD *)v4 = v2;
      *a2 = v5;
    }
  }
  else
  {
    v6 = sub_94700(
           (int)"exec.c",
           452,
           "%s: Assertion `%s' failed.",
           "void add_to_section_table(bfd*, bfd_section*, void*)",
           "abfd == asect->owner");
    LODWORD(a1) = sub_9489C(v6, HIDWORD(v6));
  }
  return a1;
}
