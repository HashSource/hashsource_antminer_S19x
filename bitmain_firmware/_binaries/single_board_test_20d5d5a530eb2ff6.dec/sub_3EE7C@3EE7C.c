int __fastcall sub_3EE7C(int a1)
{
  pthread_t v1; // r0

  (*(void (__fastcall **)(_DWORD, int))(a1 + 138936))(*(_DWORD *)dword_705300, a1);
  v1 = pthread_self();
  pthread_detach(v1);
  return 0;
}
