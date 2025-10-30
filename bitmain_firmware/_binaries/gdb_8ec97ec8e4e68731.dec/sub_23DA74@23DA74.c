bool __fastcall sub_23DA74(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r2

  v4 = (_DWORD *)dword_48A4D4;
  if ( !dword_48A4D4 )
  {
LABEL_8:
    sub_94700((int)"thread.c", 958, "%s: Assertion `%s' failed.", "int is_thread_state(ptid_t, thread_state)", "tp");
    JUMPOUT(0x23DB1C);
  }
  while ( v4[2] != a1 || a2 != v4[3] || v4[4] != a3 )
  {
    v4 = (_DWORD *)v4[1];
    if ( !v4 )
      goto LABEL_8;
  }
  return v4[11] == a4;
}
