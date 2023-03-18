class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        numRows=34
        result=[[1]*(i+1) for i in range(numRows)]
        for i in range(2,numRows):
            for j in range(1,len(result[i])-1):
                result[i][j]=result[i-1 ][j]+result[i-1][j-1]
        return result[rowIndex]
