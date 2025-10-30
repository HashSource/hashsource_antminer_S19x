__int64 __fastcall log_proc_init(__int64 a1, __int64 a2)
{
  __int64 data; // x0
  __int64 v4; // x1
  unsigned int v5; // w3
  _DWORD *v6; // x0

  data = proc_create_data(&unk_3498, 420, a1, &off_27B8, 0);
  v5 = 0;
  if ( !data )
  {
    printk(&unk_34A0, v4);
    v5 = -1;
  }
  v6 = (_DWORD *)(a2 + 593936);
  qword_4200 = a2;
  do
    *v6++ = 4;
  while ( v6 != (_DWORD *)(a2 + 594068) );
  return v5;
}
