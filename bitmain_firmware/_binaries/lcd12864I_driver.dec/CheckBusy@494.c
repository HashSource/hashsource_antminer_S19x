int CheckBusy()
{
  int result; // r0

  do
  {
    SendByte(252);
    result = ReceiveByte();
  }
  while ( (result & 0x80) != 0 );
  return result;
}
