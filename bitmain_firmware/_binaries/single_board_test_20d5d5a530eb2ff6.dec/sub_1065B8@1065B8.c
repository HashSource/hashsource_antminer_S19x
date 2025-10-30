int __fastcall sub_1065B8(int a1)
{
  *(_QWORD *)(a1 + 16) = 0x3C6EF372FE94F82BLL;
  *(_QWORD *)(a1 + 24) = 0xA54FF53A5F1D36F1LL;
  *(_QWORD *)(a1 + 32) = 0x510E527FADE682D1LL;
  *(_QWORD *)(a1 + 40) = 0x9B05688C2B3E6C1FLL;
  *(_QWORD *)a1 = 0x6A09E667F3BCC908LL;
  *(_QWORD *)(a1 + 8) = 0xBB67AE8584CAA73BLL;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 48) = 0x1F83D9ABFB41BD6BLL;
  *(_DWORD *)(a1 + 212) = 64;
  *(_QWORD *)(a1 + 56) = 0x5BE0CD19137E2179LL;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return 1;
}
