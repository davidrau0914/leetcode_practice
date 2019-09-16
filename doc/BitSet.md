#### **1. Check if the integer is even or odd**
```
if ((x & 1) == 0) {
    x is even
} else {
    x is odd
}
```
<br/>

#### **2. Test if the n-th bit is set**
```
if (x & (1 << n)) {
    n-th bit is set
} else {
    n-th bit is not set
}
```
<br/>

#### **3. Set the n-th bit**
```
y = x | (1 << n)
```
<br/>

#### **4. Unset the n-th bit**
```
y = x & ~(1 << n)
```
<br/>

#### **5. Toggle the n-th bit**
```
y = x ^ (1 << n)
```
<br/>

#### **6. Turn off the rightmost 1-bit，將最右邊的1清為0**
```
y = x & (x - 1)
```
<br/>

#### **7. Isolate the rightmost 1-bit，留下最右邊的1 其餘位都清為0**
```
y = x & (-x)
```
<br/>

#### **8. Right propagate the rightmost 1-bit，將最右邊的1的右邊全部重置為1**
```
y = x | (x - 1)
```
<br/>

#### **9. Isolate the rightmost 0-bit，將最右邊的0重置為1 其餘都重置為0** 
```
y = ~x & (x + 1)
```
<br/>

#### **10. Turn on the rightmost 0-bit，將最右邊的0重置為1**
```
y = x | (x + 1)
```
<br/>
